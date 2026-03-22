#include "stepper.h"
#include "keyboard.h"
#include "ledinv.h"

Stepper MyStepper;
Keyboard MyKeyboard;


void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 10000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	Led *pLed;
	
	if (MyKeyboard.eRead() == BUTTON_4){
		pLed = new LedInv;
	} else {
		pLed = new Led;
	}
	
	MyStepper.SetLed(pLed);
	
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
