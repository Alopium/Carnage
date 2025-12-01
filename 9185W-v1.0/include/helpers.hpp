#include "main.h"
#include "pros/device.hpp"
#include "pros/rtos.hpp"



void setIntake(int intakePower);
void setlift(int liftpower);
void setMScore (int intakePower);
void setnomnom (int intakePower);
void setScore (int intakePower);
void setbucket(int intakePower);
void sethold (int intakePower);
//lift
extern ez::PID liftPID;
void ballget();
void unjam();
void liftWait();
void lift_task();
void init();
void CS_task();
extern bool isRed;
extern int IntakeSpeed;
