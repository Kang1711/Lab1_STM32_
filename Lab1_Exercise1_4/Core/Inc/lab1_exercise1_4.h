/*
 * lab1_exercise1_4.h
 *
 *  Created on: Sep 16, 2024
 *      Author: Ngo Truc Linh
 */

#ifndef INC_LAB1_EXERCISE1_4_H_
#define INC_LAB1_EXERCISE1_4_H_



#endif /* INC_LAB1_EXERCISE1_4_H_ */
#include "main.h"
const uint8_t segment_p[10] = {
    0b00111111, // 0
    0b00000110, // 1
    0b01011011, // 2
    0b01001111, // 3
    0b01100110, // 4
    0b01101101, // 5
    0b01111101, // 6
    0b00000111, // 7
    0b01111111, // 8
    0b01101111  // 9
};

void LED_RED_ON(void){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
}
void LED_RED_OFF(void){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
}
void LED_YELLOW_ON(void){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
}
void LED_YELLOW_OFF(void){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
}
void Ex1(int counter){
	if (counter % 2 == 0) {
        HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
        HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
    }
}
void Ex2(int counter){
	switch(counter) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
            HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
            HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
            break;
        case 5:
        case 6:
            HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
            HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
            break;
        case 7:
        case 8:
        case 9:
            HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
            HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
            HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
            break;
        default:
            break;
    }
}
void Ex3(int counter) {
    int state;
    if (counter < 3) {
        state = 0;
    } else if (counter < 5 && counter >= 3) {
        state = 1;
    } else if(counter >=5 && counter < 8){
        state = 2;
    }
    else state = 3;
//0-3: Hai bên đỏ, 2 bên xanh.
//3-5: Hai bên đỏ, 2 bên vàng.
//5-8: Hai bên xanh, 2 bên đỏ.
//8-10: Hai bên vàng,  2 bên đỏ.
    switch (state) {
        case 0: // 0-3s
            HAL_GPIO_WritePin(LED_RED_31_GPIO_Port, LED_RED_31_Pin, SET);
            HAL_GPIO_WritePin(LED_YELLOW_31_GPIO_Port, LED_YELLOW_31_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_31_GPIO_Port, LED_GREEN_31_Pin, RESET);

            HAL_GPIO_WritePin(LED_RED_32_GPIO_Port, LED_RED_32_Pin, RESET);
            HAL_GPIO_WritePin(LED_YELLOW_32_GPIO_Port, LED_YELLOW_32_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_32_GPIO_Port, LED_GREEN_32_Pin, SET);

            HAL_GPIO_WritePin(LED_RED_33_GPIO_Port, LED_RED_33_Pin, RESET);
            HAL_GPIO_WritePin(LED_YELLOW_33_GPIO_Port, LED_YELLOW_33_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_33_GPIO_Port, LED_GREEN_33_Pin, SET);

            HAL_GPIO_WritePin(LED_RED_34_GPIO_Port, LED_RED_34_Pin, SET);
            HAL_GPIO_WritePin(LED_YELLOW_34_GPIO_Port, LED_YELLOW_34_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_34_GPIO_Port, LED_GREEN_34_Pin, RESET);
            break;

        case 1: // 3-5s
            HAL_GPIO_WritePin(LED_RED_31_GPIO_Port, LED_RED_31_Pin, SET);
            HAL_GPIO_WritePin(LED_YELLOW_31_GPIO_Port, LED_YELLOW_31_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_31_GPIO_Port, LED_GREEN_31_Pin, RESET);

            HAL_GPIO_WritePin(LED_RED_32_GPIO_Port, LED_RED_32_Pin, RESET);
            HAL_GPIO_WritePin(LED_YELLOW_32_GPIO_Port, LED_YELLOW_32_Pin, SET);
            HAL_GPIO_WritePin(LED_GREEN_32_GPIO_Port, LED_GREEN_32_Pin, RESET);

            HAL_GPIO_WritePin(LED_RED_33_GPIO_Port, LED_RED_33_Pin, RESET);
            HAL_GPIO_WritePin(LED_YELLOW_33_GPIO_Port, LED_YELLOW_33_Pin, SET);
            HAL_GPIO_WritePin(LED_GREEN_33_GPIO_Port, LED_GREEN_33_Pin, RESET);

            HAL_GPIO_WritePin(LED_RED_34_GPIO_Port, LED_RED_34_Pin, SET);
            HAL_GPIO_WritePin(LED_YELLOW_34_GPIO_Port, LED_YELLOW_34_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_34_GPIO_Port, LED_GREEN_34_Pin, RESET);
            break;

        case 2: // 5-8s
            HAL_GPIO_WritePin(LED_RED_31_GPIO_Port, LED_RED_31_Pin, RESET);
            HAL_GPIO_WritePin(LED_YELLOW_31_GPIO_Port, LED_YELLOW_31_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_31_GPIO_Port, LED_GREEN_31_Pin, SET);

            HAL_GPIO_WritePin(LED_RED_32_GPIO_Port, LED_RED_32_Pin, SET);
            HAL_GPIO_WritePin(LED_YELLOW_32_GPIO_Port, LED_YELLOW_32_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_32_GPIO_Port, LED_GREEN_32_Pin, RESET);

            HAL_GPIO_WritePin(LED_RED_33_GPIO_Port, LED_RED_33_Pin, SET);
            HAL_GPIO_WritePin(LED_YELLOW_33_GPIO_Port, LED_YELLOW_33_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_33_GPIO_Port, LED_GREEN_33_Pin, RESET);

            HAL_GPIO_WritePin(LED_RED_34_GPIO_Port, LED_RED_34_Pin, RESET);
            HAL_GPIO_WritePin(LED_YELLOW_34_GPIO_Port, LED_YELLOW_34_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_34_GPIO_Port, LED_GREEN_34_Pin, SET);
            break;

		case 3: //8-10s
		    HAL_GPIO_WritePin(LED_RED_31_GPIO_Port, LED_RED_31_Pin, RESET);
            HAL_GPIO_WritePin(LED_YELLOW_31_GPIO_Port, LED_YELLOW_31_Pin, SET);
            HAL_GPIO_WritePin(LED_GREEN_31_GPIO_Port, LED_GREEN_31_Pin, RESET);

            HAL_GPIO_WritePin(LED_RED_32_GPIO_Port, LED_RED_32_Pin, SET);
            HAL_GPIO_WritePin(LED_YELLOW_32_GPIO_Port, LED_YELLOW_32_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_32_GPIO_Port, LED_GREEN_32_Pin, RESET);

            HAL_GPIO_WritePin(LED_RED_33_GPIO_Port, LED_RED_33_Pin, SET);
            HAL_GPIO_WritePin(LED_YELLOW_33_GPIO_Port, LED_YELLOW_33_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_33_GPIO_Port, LED_GREEN_33_Pin, RESET);

            HAL_GPIO_WritePin(LED_RED_34_GPIO_Port, LED_RED_34_Pin, RESET);
            HAL_GPIO_WritePin(LED_YELLOW_34_GPIO_Port, LED_YELLOW_34_Pin, SET);
            HAL_GPIO_WritePin(LED_GREEN_34_GPIO_Port, LED_GREEN_34_Pin, RESET);
            break;

        default:
            HAL_GPIO_WritePin(LED_RED_31_GPIO_Port, LED_RED_31_Pin, RESET);
            HAL_GPIO_WritePin(LED_YELLOW_31_GPIO_Port, LED_YELLOW_31_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_31_GPIO_Port, LED_GREEN_31_Pin, RESET);

            HAL_GPIO_WritePin(LED_RED_32_GPIO_Port, LED_RED_32_Pin, RESET);
            HAL_GPIO_WritePin(LED_YELLOW_32_GPIO_Port, LED_YELLOW_32_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_32_GPIO_Port, LED_GREEN_32_Pin, RESET);

            HAL_GPIO_WritePin(LED_RED_33_GPIO_Port, LED_RED_33_Pin, RESET);
            HAL_GPIO_WritePin(LED_YELLOW_33_GPIO_Port, LED_YELLOW_33_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_33_GPIO_Port, LED_GREEN_33_Pin, RESET);

            HAL_GPIO_WritePin(LED_RED_34_GPIO_Port, LED_RED_34_Pin, RESET);
            HAL_GPIO_WritePin(LED_YELLOW_34_GPIO_Port, LED_YELLOW_34_Pin, RESET);
            HAL_GPIO_WritePin(LED_GREEN_34_GPIO_Port, LED_GREEN_34_Pin, RESET);
            break;
    }
}
void display7SEG(int num) { //Ex4
    if (num < 0 || num > 9) return;
    uint8_t p = segment_p[num];

    //Check từng bit trong segment_p
    HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, (p & 0x01) ? RESET : SET);
    HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, (p & 0x02) ? RESET : SET);
    HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, (p & 0x04) ? RESET : SET);
    HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, (p & 0x08) ? RESET : SET);
    HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, (p & 0x10) ? RESET : SET);
    HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, (p & 0x20) ? RESET : SET);
    HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, (p & 0x40) ? RESET : SET);
}
