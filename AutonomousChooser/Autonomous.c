#include "JoystickDriver.c"  //Include file to "handle" the Bluetooth messages.
#include "menu_helper.h"
#include "menu_config.h"

void initializeRobot()
{
	return;
}

task main()
{
	initializeRobot();
	setupMenu();

	bDisplayDiagnostics = false;
	StartTask(runMenu);

	waitForStart(); // Wait for the beginning of autonomous phase.

	StopTask(runMenu);
	eraseDisplay();
	bDisplayDiagnostics = true;

	wait1Msec(delayTime*1000);

	//Use the variables to run your auto here
}
