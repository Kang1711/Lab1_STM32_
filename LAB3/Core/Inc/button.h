/*
 * button.h
 *
 *  Created on: Nov 11, 2024
 *      Author: Ngo Truc Linh
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE 	SET
#define PRESSED_STATE 	RESET
#define NUM_OF_BUTTON 	3

int buttonBuffer[NUM_OF_BUTTON];
int button_flag[NUM_OF_BUTTON] ;
int TimeOutForButtonPress[NUM_OF_BUTTON];


int isButtonPress(int index);
int Button1IsPressed();
int Button2IsPressed();
int Button3IsPressed();
int NoButtonPressed();
void getKeyInput();

#endif /* INC_BUTTON_H_ */
