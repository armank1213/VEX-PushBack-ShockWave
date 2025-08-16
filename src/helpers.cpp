#include "main.h"

#define RED_SIG 1
#define BLUE_SIG 2

// Intake Motor Function Initialization 
void setIntake(int intakePower) {
    intakeMotor.move(intakePower);
}

// Sort Motor Function Initialization
void setSort(int sortPower) {
    sortMotor.move(sortPower);
}

// Color Sorting Function Initialization
void colorSort() {
    pros::vision_object_s_t redBlock = visionSensor.get_by_sig(0, RED_SIG);
    pros::vision_object_s_t blueBlock = visionSensor.get_by_sig(0, BLUE_SIG);

    if (redBlock.signature != 0) {
        setSort(127);
    }
    else if (blueBlock.signature != 0) {
        setSort(-127);
    }
    else {
        setSort(0);
    }
}