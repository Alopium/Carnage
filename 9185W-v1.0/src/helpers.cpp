#include <set>
#include <string>
#include "main.h"
#include "pros/misc.h"
#include "pros/rtos.hpp"


void setScore(int intakePower){
intakes.move(intakePower);
intakeu.move(intakePower);
}
void setnomnom(int intakePower){
intakeu.move(intakePower);

}
void setMScore (int intakePower){
} 
void ballget(){
    chassis.pid_drive_set(-3.1,80);
    chassis.pid_wait();
    pros::delay(60);
    chassis.pid_drive_set(3.2,80);
    chassis.pid_wait();
}
void unjam(){
    setnomnom(127);
    pros::delay(150);
    setScore(-127);
}
void setbucket (int intakePower){

}
void sethold(int intakePower){

}


//lift
/*void setlift(int liftpower){
    lift.move(liftpower);
} */



//ez::PID liftPID{0.6,0,0,0,"Lift"};

/*void lift_wait(){
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
*/




//Initialize PID
/*void init() {
    //liftM.tare_position();

    liftPID.exit_condition_set(80, 
    50, 
    300, 
    150, 
    00, 
    500);

master.rumble(".");
}
*/

