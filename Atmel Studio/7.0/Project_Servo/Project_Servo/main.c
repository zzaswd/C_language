/*
 * Project_Servo.c
 *
 * Created: 2022-07-28 오전 9:01:50
 * Author : KCCI10
 */ 

#define F_CPU	14745600L 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

int t_cnt = 0;
int AngleCount = 0;
void Servo(int);

void Servo(int Angle)
{
	if (Angle == -90 )
	AngleCount = 23; // PWM ON Time 2.3[ms]
	else if (Angle == 0)
	AngleCount = 14; // PWM ON Time 1.5[ms]
	else if(Angle == 90)
	AngleCount = 7; // PWM ON Time 0.7[ms]
 }
 
	
ISR(TIMER0_OVF_vect){
	TCNT0 = 244;
	t_cnt++;
	
	if(t_cnt <= AngleCount)
		PORTB= 0xff; // PWM ON Time
	else
		PORTB = 0x00; // PWM OFF Time
	if(t_cnt >= 200)
		t_cnt = 0; // 20[ms] 주기 PWM
}

int main(void)
{

	DDRB = 0xff;
	//OCR0 = 131;
	PORTB = 0xff;
	TCCR0 = (1<<CS02) |  (0<<CS01) | (1<<CS00);
	TIMSK = (1<<TOIE0) ;
	AngleCount = 15; // 초기 서보 위치를 0도로 설정한다
	TCNT0 = 244;
	
	sei();
    /* Replace with your application code */
	
/*
    while (1)
    {
	    Servo(0);
	    _delay_ms(3000);

	    Servo(90);
	    _delay_ms(3000);

	    Servo(-90);
	    _delay_ms(3000);
		
    
	}
	*/
	
}

