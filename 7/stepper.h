#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"

enum Step{LEFT,RIGHT};

class Stepper {
private:
Led MyLed;
unsigned char LedCtr;
void Step(enum Step eStep);

public:
void StepRight(void);
void StepLeft(void);
Stepper(unsigned char ucStartingPosition = 0);

};
#endif
