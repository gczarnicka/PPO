#ifndef STEPPER_H
#define STEPPER_H

enum Step{LEFT,RIGHT};

class Stepper {
private:
unsigned char LedCtr;
void Step(enum Step eStep);

public:
void StepRight(void);
void StepLeft(void);

};
#endif
