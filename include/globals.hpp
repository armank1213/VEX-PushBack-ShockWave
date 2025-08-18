#include "main.h"

// Motors
extern pros::Motor intakeMotor;
extern pros::Motor sortMotor;

// Vision Sensor
extern pros::Vision visionSensor;

// Color Signatures
extern pros::vision_signature_s_t RED_SIG;
extern pros::vision_signature_s_t BLUE_SIG;

// Pneumatics 
extern pros::adi::Pneumatics matchLoadPiston; 