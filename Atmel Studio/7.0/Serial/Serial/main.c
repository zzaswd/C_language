/*
 * Serial.c
 *
 * Created: 2022-07-27 오전 11:49:56
 * Author : KCCI10
 */ 

#define F_CPU	14745600L
#include <avr/io.h>
#include <util/delay.h>

void UART0_transmit(char data);
uint8_t UART0_receive(void);

void UART0_transmit(char data){
	while(!(UCSR0A & (1<<UDRE0))); // UDRE0 = 5; UCSR0A에서 bit 5가 UDRE이며 UDR이 비어있을 때만 보낼 수 있기 때문에 확인하는 과정이다. 0x1 5bit  
	// 비어있는 경우 1& 1 = 1 -> not 해서 0 되면서 while을 빠져나간다.
	
	UDR0 = data;	
}

uint8_t UART0_receive(void){
	while(!(UCSR0A & (1<<RXC0)));
	return UDR0;	
}


#if 1
int main(void)
{
	/* Replace with your application code */
	//DDRE = 0xFE; tx 1번 rx 0번. DDR 1이면 Out, 0 Input
	//UCSR0A는 딱히 건드릴 것이 없다.
	UCSR0B = (1<<RXEN0) | (1<<TXEN0); // Tx, Rx 를 모두 Enable 한다.
	//UCSR0C도 딱히 건드릴 것이 없다.
	UBRR0L = 95;
	
	while (1)
	{
		char data = UART0_receive();
		UART0_transmit(data);
		_delay_ms(10);
	}
}
#endif



#if 0
int main(void)
{
    /* Replace with your application code */
    //DDRE = 0xFE;
	//UCSR0A는 딱히 건드릴 것이 없다.
	UCSR0B = (1<<RXEN0) | (1<<TXEN0); // Tx, Rx 를 모두 Enable 한다. 
	//UCSR0C도 딱히 건드릴 것이 없다.
	UBRR0L = 95;
	
	while (1) 
    {
		UART0_transmit('a');
		_delay_ms(1000);
		UART0_transmit('b');
		_delay_ms(1000);
		UART0_transmit('c');
		_delay_ms(1000);
		UART0_transmit('d');
		_delay_ms(1000);
		
    }
}
#endif