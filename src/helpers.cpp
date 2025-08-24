#include "main.h"
#include "pros/misc.h"

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

// Manual Intake Control
void manIntake() {
    if (master.get_digital(DIGITAL_R1)) {
      setIntake(127);
    }
    else if (master.get_digital(DIGITAL_R2)) {
      setIntake(-127);
    }
    else {
      setIntake(0);
    }
}

// Manual Sorting Control
void manSort() {
    if (master.get_digital(DIGITAL_L1)) {
      setSort(-127);
    }
    else if (master.get_digital(DIGITAL_L2)) {
      setSort(127);
    }
    else {
      setSort(0);
    }
}


void setPiston(){
    if (master.get_digital_new_press(DIGITAL_X)) {
        matchLoadPiston.toggle();
    }
}

// Color Sorting Function Initialization
void colorSort() { 
    // main method (test)
    pros::vision_object_s_t block = visionSensor.get_by_size(0);

    if (block.signature == RED_SIG && block.width > 100) {
        setSort(127);
    }
    else if (block.signature == BLUE_SIG && block.width > 100) {
        setSort(-127);
    }
    else {
        setSort(0);
    }

    // pros::vision_object_s_t object_arr[MAX_VISION_OBJECTS];

    // Sort Method 1
    /*
    for (int i = 0; i < MAX_VISION_OBJECTS; i++) {
        if (object_arr[i].signature == RED_SIG) {
            setSort(127);
            break;
        }
        else if (object_arr[i].signature == BLUE_SIG) {
            setSort(-127);
            break;
        }
        else {
            setSort(0);
        }
    }
    */
    
    
    // Sort Method 2
    /*
    pros::vision_object_s_t object_arr[MAX_VISION_OBJECTS];

    if (object_arr[0].signature == RED_SIG) {
        setSort(127);
    }
    else if (object_arr[0].signature == BLUE_SIG) {
        setSort(-127);
    }
    else {
        setSort(0);
    }
    */ 


    // Sort Method 3
    /*
    if (object_arr[0].width == 150) {
        setSort(127);
    }
    else if (object_arr[0].width == 150) {
        setSort(-127);
    }
    else {
        setSort(0);
    }
    */
}