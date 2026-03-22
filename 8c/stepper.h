#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"
#include "ledinv.h"

enum Step{LEFT,RIGHT};

class Stepper {
private:
Led MyLed;
LedInv MyLedInv;
unsigned char LedCtr;
void Step(enum Step eStep);

public:
void StepRight(void);
void StepLeft(void);

};
#endif
