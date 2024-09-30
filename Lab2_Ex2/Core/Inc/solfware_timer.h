/*
 * solfware_timer.h
 *
 *  Created on: Sep 30, 2024
 *      Author: Ngo Truc Linh
 */

#ifndef INC_SOLFWARE_TIMER_H_
#define INC_SOLFWARE_TIMER_H_



#endif /* INC_SOLFWARE_TIMER_H_ */
#include "main.h"
int timer1_counter=0;
int timer1_flag=0;
int timer2_counter=0;
int timer2_flag=0;

const uint8_t segment_p[10] = {
    0b00111111,
    0b00000110,
    0b01011011,
    0b01001111,
    0b01100110,
    0b01101101,
    0b01111101,
    0b00000111,
    0b01111111,
    0b01101111
};
void display7SEG5(int num) {
    if (num < 0 || num > 9) return;
    uint8_t p = segment_p[num];

    //Check từng bit trong segment_p
    HAL_GPIO_WritePin(Seg0_GPIO_Port, Seg0_Pin, (p & 0x01) ? RESET : SET);
    HAL_GPIO_WritePin(Seg1_GPIO_Port, Seg1_Pin, (p & 0x02) ? RESET : SET);
    HAL_GPIO_WritePin(Seg2_GPIO_Port, Seg2_Pin, (p & 0x04) ? RESET : SET);
    HAL_GPIO_WritePin(Seg3_GPIO_Port, Seg3_Pin, (p & 0x08) ? RESET : SET);
    HAL_GPIO_WritePin(Seg4_GPIO_Port, Seg4_Pin, (p & 0x10) ? RESET : SET);
    HAL_GPIO_WritePin(Seg5_GPIO_Port, Seg5_Pin, (p & 0x20) ? RESET : SET);
    HAL_GPIO_WritePin(Seg6_GPIO_Port, Seg6_Pin, (p & 0x40) ? RESET : SET);
}
/*void display7SEG5(int num) {
	//uint8_t p = segment_p[num];
	if(num==2){
    HAL_GPIO_WritePin(Seg0_GPIO_Port, Seg0_Pin, RESET);
    HAL_GPIO_WritePin(Seg1_GPIO_Port, Seg1_Pin, RESET);
    HAL_GPIO_WritePin(Seg2_GPIO_Port, Seg2_Pin, SET);
    HAL_GPIO_WritePin(Seg3_GPIO_Port, Seg3_Pin, RESET);
    HAL_GPIO_WritePin(Seg4_GPIO_Port, Seg4_Pin, RESET);
    HAL_GPIO_WritePin(Seg5_GPIO_Port, Seg5_Pin, SET);
    HAL_GPIO_WritePin(Seg6_GPIO_Port, Seg6_Pin, RESET);
	}
	else if(num==1){
		HAL_GPIO_WritePin(Seg0_GPIO_Port, Seg0_Pin, SET);
		HAL_GPIO_WritePin(Seg1_GPIO_Port, Seg1_Pin, RESET);
		HAL_GPIO_WritePin(Seg2_GPIO_Port, Seg2_Pin, RESET);
		HAL_GPIO_WritePin(Seg3_GPIO_Port, Seg3_Pin, SET);
		HAL_GPIO_WritePin(Seg4_GPIO_Port, Seg4_Pin, SET);
		HAL_GPIO_WritePin(Seg5_GPIO_Port, Seg5_Pin, SET);
		HAL_GPIO_WritePin(Seg6_GPIO_Port, Seg6_Pin, SET);
	}
}*/
void clearC(){
	HAL_GPIO_WritePin(Seg0_GPIO_Port, Seg0_Pin, SET);
	    HAL_GPIO_WritePin(Seg1_GPIO_Port, Seg1_Pin, SET);
	    HAL_GPIO_WritePin(Seg2_GPIO_Port, Seg2_Pin, SET);
	    HAL_GPIO_WritePin(Seg3_GPIO_Port, Seg3_Pin, SET);
	    HAL_GPIO_WritePin(Seg4_GPIO_Port, Seg4_Pin, SET);
	    HAL_GPIO_WritePin(Seg5_GPIO_Port, Seg5_Pin, SET);
	    HAL_GPIO_WritePin(Seg6_GPIO_Port, Seg6_Pin, SET);
}
void setTimer1(int duration){
	timer1_counter=duration;
	timer1_flag=0;
}
void setTimer2(int d){
	timer2_counter=d;
	timer2_flag=0;
}

void timerRun(){
	if (timer1_counter>0){
		timer1_counter--;
		if(timer1_counter<=0){
			timer1_flag=1;
		}
	}
	if (timer2_counter>0){ //Ex1
			timer2_counter--;
			if(timer2_counter<=0){
				timer2_flag=1;
			}
	}
}
