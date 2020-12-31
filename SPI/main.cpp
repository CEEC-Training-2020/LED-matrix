/*
 * SPI.cpp
 *
 * Created: 12/29/2020 3:47:17 PM
 * Author : duc
 */

#include <avr/io.h>
#include "MAX7219.h"

void Init_SPI(void)
{
	// Config master mode
	PORTB |= (1<<SPI_SS) | (1<<SPI_MOSI) | (1<<SPI_SCK);
	// Enable SPI, Master, set clock rate fck/16
	SPCR |= (1<<SPE) | (1<<MSTR) | (1<<SPR0);
}

int main(void)
{
    /* Replace with your application code */
	Init_SPI();
	MAX7219_Init();
    while (1)
    {
		MAX7219_SendString("abc");
    }
}

