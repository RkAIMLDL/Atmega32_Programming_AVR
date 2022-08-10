
#define F_CPU 16000000L
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
	//making the pins as input
	DDRB &=~(1<<3);
	DDRB &=~(1<<5);
	//unable the rebuilt register
	PORTB |=(1<<3);
	PORTB |=(1<<5);
	//led pins works as input
	DDRB |=(1<<0);
	DDRB |=(1<<5);
    while (1) 
    {
		if((PINB & 0x08)==0)//0000 0100
		{
			PORTB |=(1<<0);//led on
		}
		else
		{
			PORTB &=~(1<<0);//led off
		}
		if((PINB & 0x20)==0)//0001 0000
		{
			PORTB |=(1<<5);
		}
		else
		{
			PORTB &=~(1<<5);
		}
    }
}

