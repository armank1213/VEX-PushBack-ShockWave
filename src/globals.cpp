#include "main.h"

// Motors
pros::Motor intakeMotor(17, pros::v5::MotorGears::green);
pros::Motor sortMotor(2, pros::v5::MotorGears::green);

// Vision Sensor
pros::Vision visionSensor(4);

// Color Signatures
pros::vision_signature_s_t RED_SIG = pros::Vision::signature_from_utility(1, 6769, 9551, 8160, -1367, -449, -908, 2.2, 0);
pros::vision_signature_s_t BLUE_SIG = pros::Vision::signature_from_utility(2, -2357, -1645, -2001, 3473, 5173, 4323, 4.4, 0);

// Pneumatics
pros::adi::Pneumatics matchLoadPiston('H', false);