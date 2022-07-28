#define  F_CPU 14745600L
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <string.h>


#define DD_MOSI 2
#define DD_SCK	1

void SPI_MasterInit(void){
	DDRB = (1<<DD_MOSI) | (1<<DD_SCK);
	SPCR = (1<<SPE) | (1<<MSTR) | (1<<SPR0); // SPI enable, Master Mode, f/16
}

void SPI_MasterTransmit(char cData){
	SPDR = cData;
	while(!(SPSR & (1<<SPIF)));
}




int main(void){
	
	SPI_MasterInit();
	while(1){
	SPI_MasterTransmit('d');	
	_delay_ms(1);
	}
}
