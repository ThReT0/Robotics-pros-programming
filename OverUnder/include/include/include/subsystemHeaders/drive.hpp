#include "main.h"
//Helper functions
void setdrive(int left, int right,)



//DRIVER CONTROL FUNCTIONS
void setDriveMotors(); {
   //bottom trigger intakes, top trigger outakes
 int intakePower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1)- controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1))
   setIntake(intakePower);
   }