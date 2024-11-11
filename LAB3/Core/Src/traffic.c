/*
 * traffic.c
 *
 *  Created on: Nov 11, 2024
 *      Author: Ngo Truc Linh
 */
#include "traffic.h"
#include "global.h"
#include "main.h"

int redt[2] = {0,5};
int yellowt[2] = {0,2};
int greent[2] = {0,3};
int red_row[2] = {0,0};
int yellow_row[2] = {0,0};
int green_row[2]= {0,0};
int red_column[2] = {0,0};
int yellow_column[2] = {0,0};
int green_column[2] = {0,0};

void display_7SEG(int index){
	switch (index) {
		case 0:
			HAL_GPIO_WritePin(GPIOA, e0_Pin|e2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e1_Pin|e3_Pin ,1);
			display7_A(led_buffer[0]);
			display7_B(led_buffer[2]);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, e0_Pin|e2_Pin ,1);
			HAL_GPIO_WritePin(GPIOA, e1_Pin|e3_Pin ,0);
			display7_A(led_buffer[1]);
			display7_B(led_buffer[3]);
			break;
		default:
			break;
	}
}

void set_traffic(){
	tatLED();
	status_row = RED_ROW;
	status_column = GREEN_COLUMN;
	red_row[0] = red_column[0] = redt[0];
	red_row[1] = red_column[1] = redt[1];
	yellow_row[0] = yellow_column[0] = yellowt[0];
	yellow_row[1] = yellow_column[1] = yellowt[1];
	green_row[0] = green_column[0] = greent[0];
	green_row[1] = green_column[1] = greent[1];
	counter = 0;
}
void setGR(){
	HAL_GPIO_WritePin(GPIOB, ga_Pin, 0);
	HAL_GPIO_WritePin(GPIOB, ra_Pin|ya_Pin, 1);
}
void setRC(){
	HAL_GPIO_WritePin(GPIOB, rb_Pin, 0);
	HAL_GPIO_WritePin(GPIOB, yb_Pin|gb_Pin, 1);
}
void setRR(){
	HAL_GPIO_WritePin(GPIOB, ra_Pin, 0);
	HAL_GPIO_WritePin(GPIOB, ya_Pin|ga_Pin, 1);
}
void setYR(){
	HAL_GPIO_WritePin(GPIOB, ya_Pin, 0);
	HAL_GPIO_WritePin(GPIOB, ra_Pin|ga_Pin, 1);
}
void setGC(){
	HAL_GPIO_WritePin(GPIOB, gb_Pin, 0);
	HAL_GPIO_WritePin(GPIOB, rb_Pin|yb_Pin, 1);
}

void tatLED(){
	HAL_GPIO_WritePin(GPIOB, ra_Pin|rb_Pin|ya_Pin|yb_Pin|ga_Pin|gb_Pin, 1);
}
void setYC(){
	HAL_GPIO_WritePin(GPIOB, yb_Pin, 0);
	HAL_GPIO_WritePin(GPIOB, rb_Pin|gb_Pin, 1);
}

void display7_B(int num){
	if(num == 0){
		HAL_GPIO_WritePin(GPIOB, sb1_Pin|sb2_Pin|sb3_Pin|sb4_Pin|sb5_Pin|sb6_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, sb7_Pin, 1);
	}
	else if(num == 1){
		HAL_GPIO_WritePin(GPIOB, sb2_Pin|sb3_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, sb1_Pin|sb7_Pin|sb4_Pin|sb5_Pin|sb6_Pin, 1);
	}
	else if(num == 2){
		HAL_GPIO_WritePin(GPIOB, sb1_Pin|sb7_Pin|sb4_Pin|sb5_Pin|sb2_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, sb6_Pin|sb3_Pin, 1);
	}
	else if(num == 3){
		HAL_GPIO_WritePin(GPIOB, sb1_Pin|sb7_Pin|sb4_Pin|sb2_Pin|sb3_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, sb5_Pin|sb6_Pin, 1);
	}
	else if(num == 4){
		HAL_GPIO_WritePin(GPIOB, sb6_Pin|sb2_Pin|sb3_Pin|sb7_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, sb1_Pin|sb4_Pin|sb5_Pin, 1);
	}
	else if(num == 5){
		HAL_GPIO_WritePin(GPIOB, sb1_Pin|sb7_Pin|sb4_Pin|sb6_Pin|sb3_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, sb5_Pin|sb2_Pin, 1);
	}
	else if(num == 6){
		HAL_GPIO_WritePin(GPIOB, sb1_Pin|sb7_Pin|sb4_Pin|sb5_Pin|sb6_Pin|sb3_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, sb2_Pin, 1);
	}
	else if(num == 7){
		HAL_GPIO_WritePin(GPIOB, sb1_Pin|sb2_Pin|sb3_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, sb7_Pin|sb4_Pin|sb5_Pin|sb6_Pin, 1);
	}
	else if(num == 8){
		HAL_GPIO_WritePin(GPIOB, sb1_Pin|sb7_Pin|sb4_Pin|sb5_Pin|sb6_Pin|sb2_Pin|sb3_Pin, 0);
	}
	else if(num == 9){
		HAL_GPIO_WritePin(GPIOB, sb1_Pin|sb7_Pin|sb4_Pin|sb2_Pin|sb3_Pin|sb6_Pin|sb2_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, sb5_Pin, 1);
	}
}
void display7_A(int num){
	if(num == 0){
		HAL_GPIO_WritePin(GPIOA, sa1_Pin|sa2_Pin|sa3_Pin|sa4_Pin|sa5_Pin|sa6_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, sa7_Pin, 1);
	}
	else if(num == 1){
		HAL_GPIO_WritePin(GPIOA, sa2_Pin|sa3_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, sa1_Pin|sa7_Pin|sa4_Pin|sa5_Pin|sa6_Pin, 1);
	}
	else if(num == 2){
		HAL_GPIO_WritePin(GPIOA, sa1_Pin|sa7_Pin|sa4_Pin|sa5_Pin|sa2_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, sa6_Pin|sa3_Pin, 1);
	}
	else if(num == 3){
		HAL_GPIO_WritePin(GPIOA, sa1_Pin|sa7_Pin|sa4_Pin|sa2_Pin|sa3_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, sa5_Pin|sa6_Pin, 1);
	}
	else if(num == 4){
		HAL_GPIO_WritePin(GPIOA, sa6_Pin|sa2_Pin|sa3_Pin|sa7_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, sa1_Pin|sa4_Pin|sa5_Pin, 1);
	}
	else if(num == 5){
		HAL_GPIO_WritePin(GPIOA, sa1_Pin|sa7_Pin|sa4_Pin|sa6_Pin|sa3_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, sa5_Pin|sa2_Pin, 1);
	}
	else if(num == 6){
		HAL_GPIO_WritePin(GPIOA, sa1_Pin|sa7_Pin|sa4_Pin|sa5_Pin|sa6_Pin|sa3_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, sa2_Pin, 1);
	}
	else if(num == 7){
		HAL_GPIO_WritePin(GPIOA, sa1_Pin|sa2_Pin|sa3_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, sa7_Pin|sa4_Pin|sa5_Pin|sa6_Pin, 1);
	}
	else if(num == 8){
		HAL_GPIO_WritePin(GPIOA, sa1_Pin|sa7_Pin|sa4_Pin|sa5_Pin|sa6_Pin|sa2_Pin|sa3_Pin, 0);
	}
	else if(num == 9){
		HAL_GPIO_WritePin(GPIOA, sa1_Pin|sa7_Pin|sa4_Pin|sa2_Pin|sa3_Pin|sa6_Pin|sa2_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, sa5_Pin, 1);
	}
}



