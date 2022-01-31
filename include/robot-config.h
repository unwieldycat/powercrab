using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern limit LimitSwitchA;
extern motor_group LeftDriveSmart;  // MANUALLY ADDED
extern motor_group RightDriveSmart; // MANUALLY ADDED
extern drivetrain Drivetrain;
extern motor forkliftMotor1;
extern motor forkliftMotor2;
extern motor liftMotor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );