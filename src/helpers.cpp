#include "main.h"

#define RED_SIG 1
#define BLUE_SIG 2

// const int MAX_VISION_OBJECTS = 2;

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
    
    // main method (test)
    pros::vision_object_s_t block = visionSensor.get_by_size(0);

    if (block.signature == RED_SIG && block.width > 50) {
        setSort(127);
    }
    else if (block.signature == BLUE_SIG && block.width > 50) {
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