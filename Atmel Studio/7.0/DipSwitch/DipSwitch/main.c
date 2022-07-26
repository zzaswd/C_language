/*
 * DipSwitch.c
 *
 * Created: 2022-07-26 오전 9:27:36
 * Author : KCCI10
 */ 

#define F_CPU 14745600L
#include <avr/io.h>


#if 1
int main(void){
	DDRE = 0xf0; // 0~3 입력 4~7 출력
	while(1){
		PORTE = PINE<<4; // 0~3까지 들어오는 애를 4만큼 밀어서 출력 신호로 만들기
	}
	
}
#endif

#if 0
int main(void)
{
	DDRE = 0x00;   
	DDRD = 0xff;
	
    /* Replace with your application code */
    while (1) 
    {
		PORTD = PINE;
    }
}

#endif