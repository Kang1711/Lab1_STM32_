/*
 * software_timer.h
 *
 *  Created on: Dec 9, 2024
 *      Author: Ngo Truc Linh
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

int timer1_flag;
int timer1_counter;
int timer2_flag;
int timer2_counter;
int timer3_flag;
int timer3_counter;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
