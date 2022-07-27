/*
 * Exam_PWM.c
 *
 * Created: 2022-07-27 오후 2:09:27
 * Author : KCCI10
 */ 

#define F_CPU 14745600L

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

int count = 0;

unsigned char font[] = {0x3f,0x06,0x5b,0x4f,
						0x66,0x6d,0x7d,0x07,
						0x7f,0x6f,0x77,0x7c,
						0x39,0x5e,0x79,0x71,
						0x08,0x80};


void print_seg(int n){
	int n1 = n % 10;
	
	PORTA=font[n1];	
	
	_delay_ms(10);
}

int real_count = 0;
ISR(TIMER2_OVF_vect){
	TCNT2 = 112; 
	count++;
	if(count ==100){
		count = 0;
		real_count++;
		if(real_count ==10){
			real_count = 0;
		}
	}
}


int main(void)
{
	DDRA = 0xff; 
	DDRC = 0xff;
	DDRB = 0xff;
	PORTA = 0xff;
	PORTC = 0xfe;
	OCR2 = 144;
	TIMSK = (1<<TOIE2);
	TCCR2 = (1<<CS22) | (1 << CS20) | (1<<COM20) | (0<<COM21); // prescaler 1024, OC2 = toggle
	TCNT2 = 112; 
	
	sei();
    /* Replace with your application code */
    while (1) 
    {
		print_seg(real_count);
    }
}

