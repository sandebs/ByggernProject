//Initialisering
#define FOSC 4915200
#define BAUD 9600
#define MYUBRR FOSC/16/BAUD-1


void USART_Init( unsigned int ubrr){
	UBRR0H = (unsigned char)(ubrr>>8);
	UBRR0L = (unsigned char)ubrr;
	
	UCSR0B = (1<<RXEN0)|(1<<TXEN0);
	,
	
	UCSR0C = (1<<URSEL0)|(1<<USBS0)|(3<<UCSZ00);
}

//Transmit function
void USART_Transmit( unsigned char data){
	
	while ( !( UCSR0A & (1<<UDRE0)));
	UDR0 = data;
}


//Receive function
unsigned char USART_receive(void){
	while ( !(UCSR0A & (1<<RXC0)))
	return UDR0;
}