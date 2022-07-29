/*
 * Servo.c
 *
 * Created: 2022-07-29 오전 10:57:02
 *  Author: KCCI10
 */ 
#include "Servo.h"

int t_cnt = 0;
int AngleCount = 0;

void Servo(int Angle)
{
	if (Angle == -90 )
	AngleCount = 23; // PWM ON Time 2.3[ms]
	else if (Angle == 0)
	AngleCount = 14; // PWM ON Time 1.5[ms]
	else if(Angle == 90)
	AngleCount = 7; // PWM ON Time 0.7[ms]
}
