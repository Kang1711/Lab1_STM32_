/*
 * command_parser_fsm.c
 *
 *  Created on: Dec 9, 2024
 *      Author: Ngo Truc Linh
 */
#include "global.h"
#include "command_parser_fsm.h"

void command_parser_fsm(){
	  int rst, ok;
	  if(index_buffer == 0){
		 ok = MAX_BUFFER_SIZE - 1;
		  rst = MAX_BUFFER_SIZE - 1;
	  }
	  if(index_buffer != 0){
		  ok = index_buffer-1;
		  rst = index_buffer-1;
	  }
	  switch (status_rst) {
		case INIT:
			if(buffer[rst] == '!')
				status_rst = RST_INIT;
			break;
		case RST_INIT:
			if(buffer[rst] == '!')
				status_rst = RST_INIT;
			else if(buffer[rst] == 'R')
				status_rst = RST_R;
			else if(buffer[rst] != '!' && buffer[rst] != 'R')
				status_rst = INIT;
			break;
		case RST_R:
			if(buffer[rst] == 'S')
				status_rst = RST_S;
			else if(buffer[rst]!='S')
				status_rst = INIT;
			break;
		case RST_S:
			if(buffer[rst] == 'T')
				status_rst = RST_T;
			else if(buffer[rst] != 'T')
				status_rst = INIT;
			break;
		case RST_T:
			if(buffer[rst] == '#') {
				status_rst = RST_FINISH;
				status_uart = UART_SEND;
			}
			else if(buffer[rst] != '#')
				status_rst = INIT;
			break;
		case RST_FINISH:
			if(buffer[rst] == '!')
				status_rst= RST_INIT;
			else if(buffer[rst]!='!')
				status_rst = INIT;
			break;
		default:
			break;
	  }
	  switch(status_ok) {
	  		case INIT:
	  			if(buffer[ok] == '!')
	  				status_ok = OK_INIT;
	  			break;
	  		case OK_INIT:
	  			if(buffer[ok] == '!')
	  				status_ok = OK_INIT;
	  			else if(buffer[ok] == 'O')
	  				status_ok = OK_O;
	  			else status_ok = INIT;
	  			break;
	  		case OK_O:
	  			if(buffer[ok] == 'K')
	  				status_ok = OK_K;
	  			else if(buffer[ok] != 'K')
	  				status_ok = INIT;
	  			break;
	  		case OK_K:
	  			if(buffer[ok] == '#'){
	  				status_ok = OK_FINISH;
	  				status_uart = UART_FINISH;
	  			}
	  			else if(buffer[ok] != '#')
	  				status_ok = INIT;
	  			break;
	  		case OK_FINISH:
	  			if(buffer[ok] == '!')
	  				status_ok = OK_INIT;
	  			else if(buffer[ok] != '!')
	  				status_ok = INIT;
	  			break;
	  		default:
	  			break;
	  	}
  }



