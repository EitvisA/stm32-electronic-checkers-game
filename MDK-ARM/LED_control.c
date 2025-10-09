#include "LED_control.h"
//GPIOC->MODER &= ~(GPIO_MODER_MODER10);

// Mapping of all LED pins and their corresponding GPIO ports
const LED_Pin led[33] = {
		{NULL, 0, 0},
    {p1_GPIO_Port,  p1_Pin,  10},
    {p3_GPIO_Port,  p3_Pin,  3},
    {p5_GPIO_Port,  p5_Pin,  5},
    {p7_GPIO_Port,  p7_Pin,  4},
    {p10_GPIO_Port, p10_Pin, 8},
    {p12_GPIO_Port, p12_Pin, 12},
    {p14_GPIO_Port, p14_Pin, 7},
    {p16_GPIO_Port, p16_Pin, 6},
    {p17_GPIO_Port, p17_Pin, 7},
    {p19_GPIO_Port, p19_Pin, 6},
    {p21_GPIO_Port, p21_Pin, 5},
    {p23_GPIO_Port, p23_Pin, 9},
    {p26_GPIO_Port, p26_Pin, 8},
    {p28_GPIO_Port, p28_Pin, 9},
    {p30_GPIO_Port, p30_Pin, 8},
    {p32_GPIO_Port, p32_Pin, 6},
    {p33_GPIO_Port, p33_Pin, 12},
    {p35_GPIO_Port, p35_Pin, 11},
    {p37_GPIO_Port, p37_Pin, 12},
    {p39_GPIO_Port, p39_Pin, 2},
    {p42_GPIO_Port, p42_Pin, 1},
    {p44_GPIO_Port, p44_Pin, 15},
    {p46_GPIO_Port, p46_Pin, 14},
    {p48_GPIO_Port, p48_Pin, 13},
    {p49_GPIO_Port, p49_Pin, 4},
    {p51_GPIO_Port, p51_Pin, 1},
    {p53_GPIO_Port, p53_Pin, 4},
    {p55_GPIO_Port, p55_Pin, 0},
    {p58_GPIO_Port, p58_Pin, 1},
    {p60_GPIO_Port, p60_Pin, 0},
    {p62_GPIO_Port, p62_Pin, 3},
    {p64_GPIO_Port, p64_Pin, 2}
	};

// Turns the LED off
void ledOff(int pin){
    led[pin].port->MODER &= ~(0x3<<(led[pin].pin_number*2));
}

// Turns the red LED on
void redOn(int pin){
		led[pin].port->MODER &= ~(0x1<<(led[pin].pin_number*2));
		HAL_GPIO_WritePin(led[pin].port, led[pin].pin, GPIO_PIN_SET);
}

// Turns the blue LED on
void blueOn(int pin){
		led[pin].port->MODER &= ~(0x1<<(led[pin].pin_number*2));
		HAL_GPIO_WritePin(led[pin].port, led[pin].pin, GPIO_PIN_RESET);
}

// Blinks the red LED
void redBlink(int pin){
		redOn(pin);
		HAL_Delay(500);
		ledOff(pin);
		HAL_Delay(500);
}

// Blinks the blue LED
void blueBlink(int pin){
		blueOn(pin);
		HAL_Delay(500);
		ledOff(pin);
		HAL_Delay(500);
}

// Checks the state(ON or OFF) of LED
int checkState(int pin){
		if (HAL_GPIO_ReadPin(led[pin].port,led[pin].pin)==1){
					return 1;
				}
		if (HAL_GPIO_ReadPin(led[pin].port,led[pin].pin)==0){
					return 0;
				}
		return 3;
}


// Initializes the starting state of all LEDs
void ledInit(void) {
    int redPins[]  = {1, 3, 5, 7, 10, 12, 14, 16, 17, 19, 21, 23};
    int bluePins[] = {42, 44, 46, 48, 49, 51, 53, 55, 58, 60, 62, 64};
    int offPins[]  = {26, 28, 30, 32, 33, 35, 37, 39};
		
		// Turn on red LEDs //
    for (int i = 0; i < sizeof(redPins)/sizeof(redPins[0]); i++) {
        redOn(redPins[i]);
				HAL_Delay(100);
    }
		
		// Turn on blue LEDs //
    for (int i = 0; i < sizeof(bluePins)/sizeof(bluePins[0]); i++) {
        blueOn(bluePins[i]);
				HAL_Delay(100);
    }
		
		// Turn off the rest of LEDs //
    for (int i = 0; i < sizeof(offPins)/sizeof(offPins[0]); i++) {
        ledOff(offPins[i]);
    }
}