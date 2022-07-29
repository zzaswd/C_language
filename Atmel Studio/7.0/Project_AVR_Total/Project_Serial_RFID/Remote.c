/*
 * Remote.c
 *
 * Created: 2022-07-29 오전 11:20:15
 *  Author: KCCI10
 */ 


#include "Remote.h"

void Remote_Init(){
	//EICRA = 0x00;
	DDRB = 0xff;
	EICRB = 0x20;   // 외부 인터럽트 6번 하강 엣지 선택
	EIMSK = 0x40;   // 외부 인터럽트 6번 채널 활성화
	EIFR = 0x40;   // 외부 인터럽트 6번 채널 플래그 클리어
	// 타이머 카운터 인터럽트 초기화
	
	//TIMSK |= (1 << OCIE2);   // 타이머 0 Output compare 인터럽트 인에이블
}