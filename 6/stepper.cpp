#include "stepper.h"

Stepper::Stepper(unsigned char ucStartingPosition) {
	LedCtr = ucStartingPosition;
	On(LedCtr);
}

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		LedCtr--;
	}
	else if(eStep == RIGHT){
		LedCtr++;
	}
		LedCtr = LedCtr % 4;
		On(LedCtr);
}

void Stepper::StepLeft(void){
	Step(LEFT);
}


void Stepper::StepRight(void){
	Step(RIGHT);
}
