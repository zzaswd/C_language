/*
 * Serial.c
 *
 * Created: 2022-07-27 오전 11:49:56
 * Author : KCCI10
 */ 
#define F_CPU	14745600L
#include <string.h>
#include "LCD.h"

void UART1_transmit(char data);
uint8_t UART1_receive(void);


void UART0_transmit(char data);
uint8_t UART0_receive(void);


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


int main(void)
{
	LCD_init();
	LCD_write_string("Hello JMS");
	_delay_ms(1000);
	LCD_clear();
	/* Replace with your application code */
	//DDRE = 0xFE;
	//UCSR0A는 딱히 건드릴 것이 없다.
	UCSR0B = (1<<RXEN0) | (1<<TXEN0); // Tx, Rx 를 모두 Enable 한다.
	//UCSR0C도 딱히 건드릴 것이 없다.
	UBRR0L = 95;
	
	UCSR1B = (1<<RXEN1) | (1<<TXEN1); // Tx, Rx 를 모두 Enable 한다.
	//UCSR0C도 딱히 건드릴 것이 없다.
	UBRR1L = 95;
	
	char recv_msg[20];
	
	int idx = 0;
	while (1)
	{
		recv_msg[idx++] = UART1_receive();
		if(recv_msg[idx-1] == 'L'){
			
			for(int jdx = 0; jdx <idx;jdx++){
					UART0_transmit(recv_msg[jdx]);
					_delay_ms(10);
			}
			
			
			recv_msg[idx-1] = NULL;
			char *pArray[10];
			char ptr = strtok(recv_msg,"@");
			
			int i = 0;
			while(ptr!=NULL){
				pArray[i++] = ptr;
				ptr = strtok(NULL,"@");
			}
			
			if(atoi(pArray[0]) ==131){
				UART0_transmit('a');
			}
			/*
			for(int jdx = 0; jdx <4;jdx++){
				int z = 0;
				while(pArray[jdx][z]!=0x00){
					UART0_transmit(pArray[jdx][z++]);
					_delay_ms(10);
				}
			}
			*/
		
			
			memset(recv_msg,0,sizeof(recv_msg));
			idx = 0;
		}
		
		
	}
}