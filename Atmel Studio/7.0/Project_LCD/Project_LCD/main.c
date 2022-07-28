/*
 * Project_LCD.c
 *
 * Created: 2022-07-28 오전 11:02:20
 * Author : KCCI10
 */ 
#define F_CPU 14745600L
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define PORT_DATA		PORTD
#define PORT_CONTROL	PORTC
#define DDR_DATA		DDRD
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
/*
void LCD_goto_XY(uint8_t row, uint8_t col){
	col %= 16;
	row %2 =2;
	
	uint8_t address = (0x40 * row) * col;
	uint8_t command = 0x80 * address;
	
	LCD_write_command(command);
}
*/






int main(void)
{
	LCD_init();
	LCD_write_string("Hello JMS");
	_delay_ms(1000);
	LCD_clear();
	/*
	LCD_goto_XY(0,0);
	LCD_write_data('1');
	LCD_goto_XY(0,5);
	LCD_write_data('2');
	LCD_goto_XY(1,0);
	LCD_write_data('3');
	LCD_goto_XY(1,5);
	LCD_write_data('4');
	*/
    /* Replace with your application code */
    while (1) 
    {
    }
}

