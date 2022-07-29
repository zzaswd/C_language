﻿/*
 * IncFile1.h
 *
 * Created: 2022-07-28 오후 9:49:02
 *  Author: KCCI10
 */ 


#ifndef LCD_H_

#define LCD_H_
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#endif /* LCD_H_ */



#define PORT_DATA		PORTA
#define PORT_CONTROL	PORTC
#define DDR_DATA		DDRA
#define DDR_CONTROL		DDRC

#define RS_PIN 0
#define RW_PIN 1
#define E_PIN 2

#define COMMAND_CLEAR_DISPLAY 0x01
#define COMMAND_8_BIT_MODE	0x38
#define COMMAND_4_BIT_MODE	0x28

#define COMMAND_DISPLAY_ON_OFF_BIT	2
#define COMMNAD_CURSOR_ON_OFF_BIT	1
#define COMMAND_BLINK_ON_OFF_BIT	0



void LCD_pulse_enable(void);

void LCD_write_data(uint8_t data);

void LCD_write_command(uint8_t command);

void LCD_clear(void);

void LCD_init(void);

void LCD_write_string(char *string);

void LCD_goto_XY(uint8_t row, uint8_t col);

void LCD_char(unsigned int data);