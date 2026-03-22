#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"

enum Step{LEFT,RIGHT};

class Stepper {
private:
Led *pLed;
unsigned char LedCtr;
void Step(enum Step eStep);

public:
void StepRight(void);
void StepLeft(void);
void SetLed(Led *pNewLed);

};
#endif
