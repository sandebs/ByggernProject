//Driver for UART

//Functions for sending and receiving data to and from the serial interface

#ifndef DRIVER_UART
#define DRIVER_UART

//Initialisering
#define FOSC 4915200
#define BAUD 9600
#define MYUBRR FOSC/16/BAUD-1


void USART_Init( unsigned int ubrr);

//Transmit function
void USART_Transmit( unsigned char data);


//Receive function
unsigned char USART_receive(void);

#endif