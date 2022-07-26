/*
 * prescaler.c
 *
 * Created: 2022-07-26 오후 3:28:13
 * Author : KCCI10
 */ 

#define F_CPU 14745600L
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>



int count = 0;
int t_cnt = 0, m_cnt = 0;

unsigned char font[] = {0x3f,0x06,0x5b,0x4f,
						0x66,0x6d,0x7d,0x07,
						0x7f,0x6f,0x77,0x7c,
						0x39,0x5e,0x79,0x71,
						0x08,0x80};

void segment(int n){
	unsigned char N1000, N100, N10, N1;
	int buff;
	N1000 = n/1000;
	buff = n%1000;
	N100 = buff/100;
	buff = buff%100;
	N10 = buff/10;
	N1=buff%10;
	
	unsigned char PrintFND[] = {N1000,N100,N10,N1};
	
	int mask = 0x01;
	int num = 0;
	/* Replace with your application code */
	for(int i = 0; i < 12 ; i ++){
		// 0001 0010 0100 1000;
		PORTC = ~mask;
		PORTA = font[PrintFND[num++]];
		_delay_ms(1);
		mask = mask << 1;
		if(num ==4){
			mask = 0x01;
			num = 0;
		}
	}
}

#if 1  // CTC 모드 사용해보기

//255- 100 155
ISR(TIMER2_COMP_vect){ //1ms 
	TCNT2 = 0xf2;//14 24
	t_cnt++;
	if(t_cnt == 1000){
		t_cnt = 0;
		m_cnt++;
	}
}



int main(void)
{
	DDRA =0xff;
	DDRC = 0x0f;
	DDRB = 0x80;
	//PORTA = 0xff;
	PORTC = 0x0f;
	OCR2 =200;
	
	TCCR2 = (1<<CS22) | (1<<CS20) | (0<<COM21) | (1<<COM20) | (1<<WGM21) | (0<<WGM20);
	TIMSK = (1<<OCIE2);
	TCNT2 = 241;
	sei();
	
	
	/* Replace with your application code */
	while (1)
	{
		segment(m_cnt);
	}
}


#endif



#if 0         // OC0로 파형 출력해보기

ISR(TIMER0_OVF_vect){
	TCNT0 = 0xf2;
	t_cnt++;
	if(t_cnt == 1000){
		t_cnt = 0;
		m_cnt++;
	}
}



int main(void)
{
	DDRA =0xff;
	DDRC = 0x0f;
	DDRB = 0x10;
	//PORTA = 0xff;
	PORTC = 0x0f;
	OCR0 =255;
	
	TCCR0 = (1<<CS02) |  (1<<CS01) | (1<<CS00) | (0<<COM01) | (1<<COM00);
	TIMSK = (1<<TOIE0) | (1<<OCIE0); 
	TCNT0 = 242;
	sei();
	
	
    /* Replace with your application code */
    while (1) 
    {
		segment(m_cnt);
    }
}



#endif