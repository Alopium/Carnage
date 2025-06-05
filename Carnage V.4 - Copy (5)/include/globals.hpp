#include "EZ-Template/piston.hpp"
#include "EZ-Template/tracking_wheel.hpp"
#include "main.h"
#include "pros/optical.hpp"
#include "pros/rotation.hpp"




inline pros::Motor intake(0);
inline pros::Motor hook(0);
inline ez::Piston clamps('C');
inline ez::Piston doinkr('E');
inline pros::Motor lift(0);
inline pros::adi::DigitalIn bumper('A');
inline ez::Piston doinkl('F');
inline ez::Piston doinklc('D');
inline ez::Piston doinkrc('B');
inline pros::Optical colorsort(0);
inline int ColorSort = 2;

