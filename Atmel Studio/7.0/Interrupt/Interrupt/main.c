/*
 * Interrupt.c
 *
 * Created: 2022-07-26 오전 10:31:38
 * Author : KCCI10
 */ 

#define F_CPU 14745600L

#include <avr/io.h>
#include <avr/interrupt.h>  // 인터럽트를 위해 사용하는 헤더파일
#include <util/delay.h>
int count = 0;

unsigned char font[] = {0x3f,0x06,0x5b,0x4f,
						0x66,0x6d,0x7d,0x07,
						0x7f,0x67,0x77,0x7c,
						0x39,0x5e,0x79,0x71,
						0x08,0x80};
						
void segment(uint8_t n){
	unsigned char	n10,n1;							
	n10 = n /10;
	n1 = n % 10;
	unsigned char print[]={n10,n1};

	int mask = 0x01;
	int num = 0;
	/* Replace with your application code */
	for(int i = 0; i < 12 ; i ++){
		// 0001 0010 0100 1000;
		PORTG = ~mask;
		PORTB = font[print[num++]];
		mask = mask << 1;
		_delay_ms(1); 
		if(num ==2){
			mask = 0x01;
			num = 0;
		}
	}
	
}

ISR(INT0_vect){		//인터럽트 벡터 == isr.
	count++;	
}

ISR(INT4_vect){		//인터럽트 벡터 == isr.
	count--;
}

int main(void)
{
	DDRB = 0xff;
	DDRG = 0x0f;
	DDRD = 0x00;
	DDRE = 0x00;
	//SREG = 0x80; // == sei(); 글로벌 인터럽트를 활성화 시켜준다는 의미. 근데 현재 SREG가 안되서 동일한 sei를 사용.
	sei();
	
	//DDRB = 0x00;
	
	//EIMSK = 0x01;
	//EIMSK = 1<<INT0;
	EIMSK = (1<<INT0) | (1<<INT4) ;
	//EICRA = 0x03;
	//EICRA = (1<<ISC01) | (1<< ISC00); //rising
	EICRA = (1<<ISC01) | (0<< ISC00); //falling
	EICRB = (1<<ISC41) | (1<< ISC40); //rising
	
	
    /* Replace with your application code */
    while (1) 
    {
		segment(count);	
    }
}

