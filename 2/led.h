#ifndef LED_H
#define LED_H

enum Step{LEFT,RIGHT};

class Led {
private:
unsigned char LedCtr;
void On(unsigned char ucLedIndex);
void Step(enum Step eStep);

public:
void StepRight(void);
void StepLeft(void);
void Init(void);
};

#endif
