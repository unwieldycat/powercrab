using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor forkliftMotor1;
extern controller Controller1;
extern motor liftMotor;
extern motor intakeMotor;
extern limit LimitSwitchA;
extern motor forkliftMotor2;
extern smartdrive Drivetrain;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );