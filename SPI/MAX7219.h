/*
 * MAX7219.h
 *
 * Created: 12/29/2020 11:54:46 PM
 *  Author: duc
 */

#ifndef MAX7219_H_
#define MAX7219_H_

#define F_CPU 8000000UL
#include <avr/io.h>
#include <stdint-gcc.h>
#include <util/delay.h>

/*Define macro*/
#define sbi(reg, pin) (reg |= (1<<pin))
#define cbi(reg, pin) (reg &= !(1<<pin))

/*Define SPI PIN*/
#define SPI_SS	 5
#define SPI_MOSI 6
#define SPI_MISO 7
#define SPI_SCK  8
#define NUM_DEVICES 4

//void SPI_Init(void);
void SPI_MasterTransmit(char data);
void MAX7219_Init(void);
void MAX7219_WriteByte(char byte);
void MAX7219_SendCmd(char addr, char data);
void MAX7219_SendString(char *str);

#endif /* MAX7219_H_ */