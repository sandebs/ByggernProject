/*
 * ByggernProject.c
 *
 * Created: 31.08.2021 17:10:52
 * Author : sandebs
 */ 

#include <avr/io.h>
#include "DRIVER_USART.h"
#define  F_CPU16000000  //  clock  frequency  in Hz
#include <util/delay.h>
#define FOSC 4915200
#define BAUD 9600
#define MYUBRR FOSC/16/BAUD-1


int main(void){
	USART_Init(MYUBRR);
	USART_Transmit(USART_receive() + 1);

	while (1)
	{
		
	}
}



