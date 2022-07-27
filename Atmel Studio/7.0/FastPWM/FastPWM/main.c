/*
 * FastPWM.c
 *
 * Created: 2022-07-27 오전 9:51:20
 * Author : KCCI10
 */ 
#define F_CPU 14745600L
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


unsigned char font[] = {0x3f,0x06,0x5b,0x4f,
						0x66,0x6d,0x7d,0x07,
						0x7f,0x6f,0x77,0x7c,
						0x39,0x5e,0x79,0x71,
						0x08,0x80};
						
int r_tcnt = 0, r_mcnt = 0;
int l_tcnt = 0, l_mcnt = 0;


void l_segment(int n){
	unsigned char N10, N1;
	N10 = n/10;
	N1= n%10;
	for(int i = 0 ; i < 2 ; i ++){
		PORTC = 0x0e;
		PORTA = font[N10];
		_delay_ms(1);
		PORTC = 0x0d;
		PORTA = font[N1];
		_delay_ms(1);
		
	}
}

void r_segment(int n){
	unsigned char N10, N1;
	N10 = n/10;
	N1= n%10;
	for(int i = 0 ; i < 2 ; i ++){
		PORTC = 0x0b;
		PORTA = font[N10];
		_delay_ms(1);
		PORTC = 0x07;
		PORTA = font[N1];
		_delay_ms(1);
		
	}
}

ISR(TIMER0_COMP_vect){
	l_tcnt++;
	if(l_tcnt>=28){
		l_tcnt = 0;
		l_mcnt++;
		if(l_mcnt > 99)
			l_mcnt = 0;
	}
}

ISR(TIMER0_OVF_vect){
	r_tcnt++;
	if(r_tcnt>=56){
		r_tcnt = 0;
		r_mcnt++;
		if(r_mcnt > 99)
			r_mcnt = 0;
	}
}

int main(void){
	DDRA = 0xff;
	DDRC = 0x0f;
	PORTA = 0xff;
	PORTC = 0x0f;
	DDRB = 0x10;
	
	TCCR0 |= (1<<WGM01)|(1<<WGM00);
	TCCR0 |= (1<<COM01)|(0<<COM00);
	TCCR0 |= (1<<CS02)|(1<<CS01)|(1<<CS00);
	TIMSK |= (1<<TOIE0) | (1<<OCIE0);
	
	TCNT0 = 0;
	OCR0 = 102;	
	sei();
	while(1){
		r_segment(r_mcnt);
		l_segment(l_mcnt);
	}
}




#if 0
int main(void)
{
    /* Replace with your application code */
	DDRB = 0x10;
	
	TCCR0 |= (1<<WGM01)|(1<<WGM00);
	TCCR0 |=  (1<<COM01)|(1<<COM00);
	TCCR0 |= (1<CS02)|(1<CS01)|(1<CS00);
	
	TCNT0 = 0;
	OCR0 = 0;
	//TIMSK = (1<<TOIE0) | (1<<OCIE0);
	
	int level = 0;
	//sei();
	
    while (1) 
    {
		OCR0 = level++;
		if(level == 255){
			level = 0;
		}
		_delay_ms(10);
    }
}

#endif