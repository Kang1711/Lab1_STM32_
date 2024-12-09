/*
 * global.h
 *
 *  Created on: Dec 9, 2024
 *      Author: Ngo Truc Linh
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "command_parser_fsm.h"
#include "software_timer.h"
#include "stdio.h"

#define INIT 210

#define OK_INIT 8
#define OK_O 9
#define OK_K 10
#define OK_FINISH 11

#define RST_INIT 0
#define RST_R 1
#define RST_S 2
#define RST_T 3
#define RST_FINISH 4

#define UART_INIT 16
#define UART_SEND 17
#define UART_FINISH 18

int status_ok;
int status_uart;
int status_rst;

#define MAX_BUFFER_SIZE 40
uint8_t temp;
uint8_t index_buffer;
uint8_t buffer_flag;
uint32_t ADC_value;
uint8_t buffer[MAX_BUFFER_SIZE];
char str[25];

#endif /* INC_GLOBAL_H_ */
