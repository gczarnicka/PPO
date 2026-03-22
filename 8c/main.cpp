#include "stepper.h"
#include "keyboard.h"

Stepper MyStepper;
Keyboard MyKeyboard;

unsigned char ucInversion = 0;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 10000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	
	if (MyKeyboard.eRead() == BUTTON_4){
		ucInversion = 1;
	}
	while(1){
		Delay(100);
		
		enum KeyboardState eState = MyKeyboard.eRead();
		
		if(eState == BUTTON_1){
			MyStepper.StepRight();
		}
		else if(eState == BUTTON_2){
			MyStepper.StepLeft();
		}
	}
}
