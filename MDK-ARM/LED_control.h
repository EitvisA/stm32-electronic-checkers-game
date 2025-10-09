#ifndef LED_CONTROL_H
#define LED_CONTROL_H

#include "main.h"

typedef struct {
    GPIO_TypeDef *port;
    uint16_t pin;
		uint8_t pin_number;
} LED_Pin;
extern const LED_Pin LEDS[33];

void ledOff(int pin);
void redOn(int pin);
void blueOn(int pin);
void redBlink(int pin);
void blueBlink(int pin);
int checkState(int pin);

#endif
