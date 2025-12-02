#include "EZ-Template/piston.hpp"
#include "EZ-Template/tracking_wheel.hpp"
#include "main.h"
#include "pros/motor_group.hpp"
#include "pros/optical.hpp"
#include "pros/rotation.hpp"



inline pros::Motor intakeh(12);
inline pros::Motor intakef(-14);
inline ez::Piston hood('A');
inline ez::Piston descore('B');
inline ez::Piston alignr('C');

inline pros::MotorGroup intakes({18, -20});
inline pros::Motor intakeu(-12);


//inline pros::Motor intakeim(-19);
//inline pros::Motor hook(0);

//inline pros::adi::DigitalIn bumper('H');
//inline ez::Piston freaky('D');
//inline ez::Piston doinklc('H');
//inline ez::Piston doinkrc('H');
//inline pros::Optical colorsort(0);
//inline int ColorSort = 2;
inline pros::Motor lift(0);
inline ez::tracking_wheel vertr (17, 2, 0.5);
inline ez::tracking_wheel horzb (16, 2, -5);


