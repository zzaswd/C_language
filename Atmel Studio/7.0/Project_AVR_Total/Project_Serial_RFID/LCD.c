/*
 * LCD.c
 *
 * Created: 2022-07-28 오후 9:49:27
 *  Author: KCCI10
 */ 

#include "LCD.h"

volatile unsigned char Num[] = { "0123456789" };
	
void LCD_pulse_enable(void){
	PORT_CONTROL |= (1<<E_PIN);
	_delay_ms(1);
	PORT_CONTROL &= ~(1<<E_PIN);
	_delay_ms(1);
}

void LCD_write_data(uint8_t data){
	PORT_CONTROL |= (1<<RS_PIN);
	PORT_DATA =data;
	LCD_pulse_enable();
	_delay_ms(2);
}

void LCD_write_command(uint8_t command){
	PORT_CONTROL &= ~(1<<RS_PIN);
	PORT_DATA = command;
	LCD_pulse_enable();
	_delay_ms(2);
}

void LCD_clear(void){
	LCD_write_command(COMMAND_CLEAR_DISPLAY);
	_delay_ms(2);
}

void LCD_init(void){
	_delay_ms(50);
	DDR_DATA = 0xFF;
	PORT_DATA = 0x00;
	DDR_CONTROL |= (1<<RS_PIN) | (1<<RW_PIN) | (1<<E_PIN);
	
	PORT_CONTROL &= ~(1<<RW_PIN);
	LCD_write_command(COMMAND_8_BIT_MODE);
	
	uint8_t command = 0x08 | (1<<COMMAND_DISPLAY_ON_OFF_BIT);
	LCD_write_command(command);
	
	LCD_clear();
	
	LCD_write_command(0x06);
}


void LCD_write_string(char *string){
	uint8_t i;
	for(i = 0; string[i]; i++){
		LCD_write_data(string[i]);
	}
}


void LCD_goto_XY(uint8_t row, uint8_t col){
	col %= 16;
	row %=2;
	
	uint8_t address = (0x40 * row) + col;
	uint8_t command = 0x80 + address;
	
	LCD_write_command(command);
}


void LCD_IR(unsigned int data)   // 4자리수 표시 함수
{
	static int j, k, l, m = 0;
	int buff;
	j = data / 1000;   // 1000의 자리
	buff = data % 1000;
	k = buff / 100;   // 100의 자리
	buff = buff % 100;
	l = buff / 10;      // 10의 자리
	m = buff % 10;      // 1의 자리
	
	LCD_write_data(Num[j]);
	LCD_write_data(Num[k]);
	LCD_write_data(Num[l]);
	LCD_write_data(Num[m]);
}
