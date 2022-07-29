/*
 * UART.c
 *
 * Created: 2022-07-29 오전 10:30:58
 *  Author: KCCI10
 */ 
#include "UART.h"

char recv_msg[20];

uint8_t UART0_receive(void){
	while(!(UCSR0A & (1<<RXC0)));
	return UDR0;
}


void UART0_transmit(char data){
	while(!(UCSR0A & (1<<UDRE0))); // UDRE0 = 5; UCSR0A에서 bit 5가 UDRE이며 UDR이 비어있을 때만 보낼 수 있기 때문에 확인하는 과정이다. 0x1 5bit
	// 비어있는 경우 1& 1 = 1 -> not 해서 0 되면서 while을 빠져나간다.
	
	UDR0 = data;
}


uint8_t UART1_receive(void){
	while(!(UCSR1A & (1<<RXC1)));
	return UDR1;
}

void UART1_transmit(char data){
	while(!(UCSR1A & (1<<UDRE1))); // UDRE0 = 5; UCSR0A에서 bit 5가 UDRE이며 UDR이 비어있을 때만 보낼 수 있기 때문에 확인하는 과정이다. 0x1 5bit
	// 비어있는 경우 1& 1 = 1 -> not 해서 0 되면서 while을 빠져나간다.
	
	UDR1 = data;
}

void UART_Init(){
	/* Replace with your application code */
	//DDRE = 0xFE;
	//UCSR0A는 딱히 건드릴 것이 없다.
	UCSR0B = (1<<RXEN0) | (1<<TXEN0); // Tx, Rx 를 모두 Enable 한다.
	//UCSR0C도 딱히 건드릴 것이 없다.
	UBRR0L = 95;
	
	UCSR1B = (1<<RXEN1) | (1<<TXEN1); // Tx, Rx 를 모두 Enable 한다.
	//UCSR0C도 딱히 건드릴 것이 없다.
	UBRR1L = 95;
}

/*
void UART_get_string(){
	
	
}*/