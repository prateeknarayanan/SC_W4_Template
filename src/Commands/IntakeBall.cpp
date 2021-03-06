#include "IntakeBall.h"

IntakeBall::IntakeBall()
{
	Requires(Intake);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void IntakeBall::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void IntakeBall::Execute()
{
	Intake->IntakeBall();
}
// Make this return true when this Command no longer needs to run execute()
bool IntakeBall::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void IntakeBall::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeBall::Interrupted()
{

}
