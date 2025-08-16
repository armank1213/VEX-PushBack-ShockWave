#include "main.h"

// Motors
pros::Motor intakeMotor(17, pros::v5::MotorGears::green);
pros::Motor sortMotor(2, pros::v5::MotorGears::green);

// Vision Sensor
pros::Vision visionSensor(4);

// Color Signatures
pros::vision_signature_s_t RED_SIG = pros::Vision::signature_from_utility(2, 11299, 12519, 11909, -2643, -1573, -2108, 10.1, 0);
pros::vision_signature_s_t BLUE_SIG = pros::Vision::signature_from_utility(1, -4321, -3569, -3945, 7301, 8501, 7901, 6.3, 0);