/*
 * fsm_automatic.c
 *
 *  Created on: Nov 11, 2024
 *      Author: Ngo Truc Linh
 */
#include "fsm_automatic.h"
#include "traffic.h"
#include "global.h"
#include "main.h"

void auto_traffic(){
	switch (status_row){
		case RED_ROW:
			setRR();
			red_row[1]--;
			if(red_row[1] < 0){
				red_row[0]--;
				red_row[1] = 9;
			}
			led_buffer[0] = red_row[0];
			led_buffer[1] = red_row[1];
			if(red_row[0] <= 0 && red_row[1] <= 0){
				red_row[0] = redt[0];
				red_row[1] = redt[1];
				status_row = GREEN_ROW;
			}
			break;
		case YELLOW_ROW:
			setYR();
			yellow_row[1]--;
			if(yellow_row[1] < 0){
				yellow_row[0]--;
				yellow_row[1] = 9;
			}
			led_buffer[0] = yellow_row[0];
			led_buffer[1] = yellow_row[1];
			if(yellow_row[0] <= 0 && yellow_row[1] <= 0){
				yellow_row[0] = yellowt[0];
				yellow_row[1] = yellowt[1];
				status_row = RED_ROW;
			}
			break;
		case GREEN_ROW:
			setGR();
			green_row[1]--;
			if(green_row[1] < 0){
				green_row[0]--;
				green_row[1] = 9;
			}
			led_buffer[0] = green_row[0];
			led_buffer[1] = green_row[1];
			if(green_row[0] <= 0 && green_row[1] <= 0){
					green_row[0] = greent[0];
					green_row[1] = greent[1];
					status_row = YELLOW_ROW;
			}
		default:
			break;
	}
	switch (status_column){
		case RED_COLUMN:
			setRC();
			red_column[1]--;
			if(red_column[1] < 0){
				red_column[0]--;
				red_column[1] = 9;
			}
			led_buffer[2] = red_column[0];
			led_buffer[3] = red_column[1];
			if(red_column[0] <= 0 && red_column[1] <= 0){
				red_column[0] = redt[0];
				red_column[1] = redt[1];
				status_column = GREEN_COLUMN;
			}
			break;
		case YELLOW_COLUMN:
			setYC();
			yellow_column[1]--;
			if(yellow_column[1] < 0){
				yellow_column[0]--;
				yellow_column[1] = 9;
			}
			led_buffer[2] = yellow_column[0];
			led_buffer[3] = yellow_column[1];
			if(yellow_column[0] <= 0 && yellow_column[1] <= 0){
				yellow_column[0] = yellowt[0];
				yellow_column[1] = yellowt[1];
				status_column = RED_COLUMN;
			}
			break;
		case GREEN_COLUMN:
			setGC();
			green_column[1]--;
			if(green_column[1] < 0){
				green_column[0]--;
				green_column[1] = 9;
			}
			led_buffer[2] = green_column[0];
			led_buffer[3] = green_column[1];
			if(green_column[0] <= 0 && green_column[1] <= 0){
				green_column[0] = greent[0];
				green_column[1] = greent[1];
				status_column = YELLOW_COLUMN;
			}
			break;
		default:
			break;
	}
}


