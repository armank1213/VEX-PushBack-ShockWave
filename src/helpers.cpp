#include "main.h"

// Intake Motor Function Initialization 
void setIntake(int intakePower) {
    intakeMotor.move(intakePower);
}

// Sort Motor Function Initialization
void setSort(int sortPower) {
    sortMotor.move(sortPower);
}