#include "main.h"

void setIntake( int power,); {
    intakeLeft = power;
    intakeRight = power;

}


//Driver control Functions
// bottom trigger intakes, top trigger outakes
void setIntakeMotors(); 
   int  intakePower = 0;
   if(controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2))
