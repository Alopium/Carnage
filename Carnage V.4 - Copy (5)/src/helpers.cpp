#include <string>
#include "main.h"
#include "pros/misc.h"
#include "pros/rtos.hpp"


void setIntake(int intakePower){
    intake.move(intakePower);
    hook.move(intakePower);
}

//lift
void setlift(int liftpower){
    lift.move(liftpower);
}


ez::PID liftPID{0.6,0,0,0,"Lift"};

void lift_wait(){
    while(liftPID.exit_condition(lift,true) == ez::RUNNING){
        pros::delay(ez::util::DELAY_TIME);
    }
}

void lift_task(){
    pros::delay(2000);
    while(true){
    setlift(liftPID.compute(lift.get_position()));

        pros::delay(ez::util::DELAY_TIME);
    }
}
void CS_task(){
        pros::delay(2000);
        while(true){
            colorsort.set_led_pwm(85);
        if(colorsort.get_hue() <230 && colorsort.get_hue() >180 && isRed){
            pros::delay(45);
            setIntake(-127);
            pros::delay(135);
            setIntake(127);
            pros::delay(75);
            setIntake(-127);
            pros::delay(75);
            setIntake(0);
    }    else if (colorsort.get_hue() <40 && colorsort.get_hue() >5 && !isRed) {
        pros::delay(45);
        setIntake(-127);
        pros::delay(135);
        setIntake(127);
        pros::delay(75);
        setIntake(-127);
        pros::delay(75);
        setIntake(0);
    }   else {
        setIntake((master.get_digital(pros::E_CONTROLLER_DIGITAL_R1)-master.get_digital(pros::E_CONTROLLER_DIGITAL_R2))*127);
    }

    pros::delay(ez::util::DELAY_TIME);
}

}






//Initialize PID
void init() {
    //liftM.tare_position();

    liftPID.exit_condition_set(80, 
    50, 
    300, 
    150, 
    00, 
    500);

master.rumble(".");
}


