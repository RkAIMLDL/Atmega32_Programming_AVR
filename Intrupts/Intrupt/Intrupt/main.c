
#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>
#include "avr/interrupt.h"

int main(void)
{
    PORTD=(1<<2)|(1<<3);
	GICR=(1<<6)|(1<<7);
	DDRA=0xff;
	sei();
    while (1) 
    {
    }
}

ISR(INT0_vect)
{
	PORTA|=(1<<0);
}
ISR(INT1_vect)
{
	PORTA&=~(1<<0);
}