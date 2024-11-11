/*
 * traffic.h
 *
 *  Created on: Nov 11, 2024
 *      Author: Ngo Truc Linh
 */

#ifndef INC_TRAFFIC_H_
#define INC_TRAFFIC_H_

int redt[2];
int yellowt[2];
int greent[2];

int red_row[2];
int yellow_row[2];
int green_row[2];

int red_column[2];
int yellow_column[2];
int green_column[2];

int status_row;
int status_column;
int led_buffer[4];

void display_7SEG(int index);
void display_traffic_light();
void display7_A(int num);
void display7_B(int num);
void tatLED();
void set_traffic();
void setRR();
void setYR();
void setGR();
void setRC();
void setYC();
void setGC();


#endif /* INC_TRAFFIC_H_ */
