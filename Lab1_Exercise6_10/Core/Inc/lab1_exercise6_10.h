/*
 * lab1_exercise6_10.h
 *
 *  Created on: Sep 16, 2024
 *      Author: Ngo Truc Linh
 */

#ifndef INC_LAB1_EXERCISE6_10_H_
#define INC_LAB1_EXERCISE6_10_H_



#endif /* INC_LAB1_EXERCISE6_10_H_ */
#include "main.h"
const uint16_t LED_Pins[] = {
    LED_61_Pin, LED_62_Pin, LED_63_Pin, LED_64_Pin,
    LED_65_Pin, LED_66_Pin, LED_67_Pin, LED_68_Pin,
    LED_69_Pin, LED_610_Pin, LED_611_Pin, LED_612_Pin
};
GPIO_TypeDef* LED_Ports[] = {
    LED_61_GPIO_Port, LED_62_GPIO_Port, LED_63_GPIO_Port, LED_64_GPIO_Port,
    LED_65_GPIO_Port, LED_66_GPIO_Port, LED_67_GPIO_Port, LED_68_GPIO_Port,
    LED_69_GPIO_Port, LED_610_GPIO_Port, LED_611_GPIO_Port, LED_612_GPIO_Port
};

const uint16_t LED_Pin[] = { // DÙng cho Ex7,8,9,10________
    LED10_1_Pin, LED10_2_Pin, LED10_3_Pin, LED10_4_Pin,
    LED10_5_Pin, LED10_6_Pin, LED10_7_Pin, LED10_8_Pin,
    LED10_9_Pin, LED10_10_Pin, LED10_11_Pin, LED10_12_Pin
};
GPIO_TypeDef* LED_Port[] = {
	LED10_1_GPIO_Port, LED10_2_GPIO_Port, LED10_3_GPIO_Port, LED10_4_GPIO_Port,
    LED10_5_GPIO_Port, LED10_6_GPIO_Port, LED10_7_GPIO_Port, LED10_8_GPIO_Port,
    LED10_9_GPIO_Port, LED10_10_GPIO_Port, LED10_11_GPIO_Port, LED10_12_GPIO_Port
};
int hour = 0;
int minute = 0;
int second = 0;
//___________________________

void Ex6(uint8_t index) {
    for (uint8_t i = 0; i < 12; i++) {
        HAL_GPIO_WritePin(LED_Ports[i], LED_Pins[i], RESET);
    }
    if (index >= 0 && index < 12) {
        HAL_GPIO_WritePin(LED_Ports[index], LED_Pins[index], SET);
    }
}
void clearAllClock (void) { //Ex7
	for (uint8_t i = 0; i < 12; i++) {
	        HAL_GPIO_WritePin(LED_Port[i], LED_Pin[i], RESET);
	}
}
void setNumberOnClock(int num){ //Ex8
	if(num>=0 && num <12) HAL_GPIO_WritePin(LED_Port[num], LED_Pin[num], SET);
}
void clearNumberOnClock(int num){ //Ex9
	if(num>=0 && num <12) HAL_GPIO_WritePin(LED_Port[num], LED_Pin[num], RESET);
}
void displayClock(int hour, int minute, int second) { //Ex10
    hour = hour % 12;
    minute = minute / 5;
    second = second / 5;

    clearAllClock();
    setNumberOnClock(hour);
    setNumberOnClock(minute);
    setNumberOnClock(second);
}
void Clock(int number) { //Ex10
	second = number;
    if (second >= 60) {
        second = 0;
        minute++;
    }
    if (minute >= 60) {
        minute = 0;
        hour++;
    }
    if (hour >= 12) {
        hour = 0;
    }
    displayClock(hour, minute, second);
}
