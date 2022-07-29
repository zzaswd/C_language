/*
 * UART.h
 *
 * Created: 2022-07-29 오전 10:31:24
 *  Author: KCCI10
 */ 


#ifndef UART_H_
#define UART_H_
#include <string.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#endif /* UART_H_ */


void UART1_transmit(char data);
uint8_t UART1_receive(void);


void UART0_transmit(char data);
uint8_t UART0_receive(void);

void UART_Init();

//void UART_get_string();
