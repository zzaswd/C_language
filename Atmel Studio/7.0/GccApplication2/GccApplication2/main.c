/*
 * GccApplication2.c
 *
 * Created: 2022-07-25 오후 3:38:32
 * Author : KCCI10
 */ 
#define F_CPU 14745600

#include <avr/io.h>
#include <util/delay.h>

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
		PORTG = ~mask;
		PORTB = font[PrintFND[num++]];
		_delay_ms(1);
		mask = mask << 1;
		if(num ==4){
			mask = 0x01;
			num = 0;
		}
	}
}

int main(void)
{
	DDRB = 0xff; // Port B의 0~37까지의 Pin을 사용하겠다.
	DDRG = 0x0f; // Port G의 0~3까지의 Pin만 사용하겠다.
	
	int count = 0;
    /* Replace with your application code */
    while (1) 
    {
		segment(count++);
		if(count ==9999) count = 0;
	}
}
		
#if 0
						
int main(void)
{
	DDRB = 0xff; // Port B의 0~37까지의 Pin을 사용하겠다.
	DDRG = 0x0f; // Port G의 0~3까지의 Pin만 사용하겠다.
	PORTG = 0b0000000; // FND 4개를 모두 키겠다. FND는 0일때만 켜지는 것.
	
	int mask = 0x01;
	int num = 0;
    /* Replace with your application code */
    while (1) 
    {
		 // 0001 0010 0100 1000;
		PORTG = ~mask;
		PORTB = font[num++];
		_delay_ms(1);
		mask = mask << 1;
		if(num ==4){
			mask = 0x01;
			num = 0;
		}
	}
}
#endif 

#if 0
int main(void)
{
	DDRB = 0xff; // Port B의 0~37까지의 Pin을 사용하겠다.
	DDRG = 0x0f; // Port G의 0~3까지의 Pin만 사용하겠다.
	PORTG = 0b0000000; // FND 4개를 모두 키겠다. FND는 0일때만 켜지는 것.
	
	int num = 0;
	/* Replace with your application code */
	while (1)
	{
		PORTB = font[num++];
		//PORTB = 1 << num++;
		_delay_ms(1000);
		
		if(num == sizeof(font)/sizeof(char)){
			PORTB = 0x01;
			num = 0;
		}
	}
}
#endif