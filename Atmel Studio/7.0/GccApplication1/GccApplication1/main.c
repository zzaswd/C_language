/*
 * GccApplication1.c
 *
 * Created: 2022-07-25 오후 2:35:21
 * Author : KCCI10
 */ 

#define F_CPU 14745600L
#include <avr/io.h>

#include <util/delay.h> // delay 사용하기 위한 header

int main(void)
{
    /* Replace with your application code */
	//DDRB = 0b00001111; // B port에 0~3은 출력, 4~7은 입력으로 사용하겠다.라는 의미.
	DDRB = 0xff; // B port 8개의 pin을 모두 output으로 사용하겠다.
    while (1) 
    {
		PORTB = 0xff; // B port 모두 HIGH 준 것.
		//_delay_ms(1000);
		
		PORTB = 0x00; // B port 모두 LOW 준 것
		//_delay_ms(1000);
		
	}
}

