#include "stepper.h"

void Stepper::SetLed(Led *pNewLed){
	pLed = pNewLed;
}

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		LedCtr--;
	}
	else if(eStep == RIGHT){
		LedCtr++;
	}
	LedCtr = LedCtr % 4;
		
	pLed->On(LedCtr);
}

void Stepper::StepLeft(void){
	Step(LEFT);
}


void Stepper::StepRight(void){
	Step(RIGHT);
}
