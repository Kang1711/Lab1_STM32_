/*
 * fsm_system.c
 *
 *  Created on: Nov 11, 2024
 *      Author: Ngo Truc Linh
 */
#include "fsm_system.h"
#include "fsm_automatic.h"
#include "global.h"
#include "button.h"

void RunSystem(){
	switch (status){
		case INIT:
			set_traffic();
			status = NORMAL_MODE;
			setTimer2(500);
			setTimer3(500);
			break;
		case NORMAL_MODE:
			if(timer2_flag){
				auto_traffic();
				setTimer2(1000);
			}
			display_7SEG(counter);
			if(timer3_flag){
				counter++;
				if(counter > 1){
					counter = 0;
				}
				setTimer3(500);
			}
			if(Button1IsPressed()){
				status = MODIFY_RED_MODE;
				setTimer1(500);
				setTimer3(500);
				tatLED();
			}
			break;
		case MODIFY_RED_MODE:
			if(Button2IsPressed()){
				redt[1]++;
				if(redt[1] > 9){
					redt[0]++;
					redt[1] = 0;
					if(redt[0] > 9 )
						redt[0] = 0;
				}
			}
			if(timer1_flag){
				led_buffer[0] = 0;
				led_buffer[1] = 2;
				led_buffer[2] = redt[0];
				led_buffer[3] = redt[1];
				display_7SEG(count);
				count++;
				if(count > 1){
					count = 0;
				}
				setTimer1(500);
			}
			if(timer3_flag){
				HAL_GPIO_TogglePin(GPIOB, ra_Pin|rb_Pin);
				setTimer3(500);
			}
			if(Button1IsPressed()){
				status = MODIFY_YELLOW_MODE;
				setTimer1(500);
				setTimer3(500);
				tatLED();
			}
			if(Button3IsPressed()){
				red_row[0] = redt[0];
				red_row[1] = redt[1];
				red_column[0] = redt[0];
				red_column[1] = redt[1];
				status = INIT; //
			}
			break;
		case MODIFY_YELLOW_MODE:
			if(Button2IsPressed()){
				yellowt[1]++;
				if(yellowt[1] > 9){
					yellowt[0]++;
					yellowt[1] = 0;
					if(yellowt[0] > 9 )
					yellowt[0] = 0;
				}
			}
			if(timer1_flag){
				led_buffer[0] = 0;
				led_buffer[1] = 3;
				led_buffer[2] = yellowt[0];
				led_buffer[3] = yellowt[1];
				display_7SEG(count);
				count++;
				if(count > 1){
					count = 0;
				}
				setTimer1(500);
			}
			if(timer3_flag){
				HAL_GPIO_TogglePin(GPIOB, ya_Pin|yb_Pin);
				setTimer3(500);
			}
			if(Button1IsPressed()){
				status = MODIFY_GREEN_MODE;
				setTimer1(500);
				setTimer3(500);
				tatLED();
			}
			if(Button3IsPressed()){
				yellow_row[0] = yellowt[0];
				yellow_row[1] = yellowt[1];
				yellow_column[0] = yellowt[0];
				yellow_column[1] = yellowt[1];
				//status_row= RED_ROW;
				//status_column= GREEN_COLUMN;
				status = INIT;
			}
			break;
		case MODIFY_GREEN_MODE:
			if(Button2IsPressed()){
				greent[1]++;
				if(greent[1] > 9){
					greent[0]++;
					greent[1] = 0;
					if(greent[0] > 9 )
					greent[0] = 0;
				}
			}
			if(timer1_flag){
				led_buffer[0] = 0;
				led_buffer[1] = 4;
				led_buffer[2] = greent[0];
				led_buffer[3] = greent[1];
				display_7SEG(count);
				count++;
				if(count > 1){
					count = 0;
				}
				setTimer1(500);
			}
			if(timer3_flag){
				HAL_GPIO_TogglePin(GPIOB, ga_Pin|gb_Pin);
				setTimer3(500);
			}
			if(Button1IsPressed()){
				status = INIT; //
				setTimer2(500);
				setTimer1(500);
			}
			if(Button3IsPressed()){
				green_row[0] = greent[0];
				green_row[1] = greent[1];
				green_column[0] = greent[0];
				green_column[1] = greent[1];

				status = INIT;//
			}
			break;
		default:
			break;
	}
}



