#include "main.h"
#include "pros/device.hpp"
#include "pros/rtos.hpp"



void setIntake(int intakePower);
void setlift(int liftpower);

//lift
extern ez::PID liftPID;
void liftWait();
void lift_task();
void init();
void CS_task();
extern bool isRed;
extern int IntakeSpeed;
inline void unjam (){
    setIntake(127);
    pros::delay(125);
    setIntake(-127);
    pros::delay(125);
    setIntake(0);
    pros::delay(75);


};
inline void loadlb(){
    setIntake(0);
    pros::delay(125);
    setIntake(-127);
    pros::delay(125);
    setIntake(0);
}
void setroller(int rollerpower);