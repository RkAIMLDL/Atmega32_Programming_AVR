#include <avr/io.h>
#include <util/delay.h>
# define F_CPU 16000000L

int main(void)
{
	DDRB &=~(1<<2);
	DDRB &=~(1<<4);
	

    while (1) 
    {
		if (DDRB | =(1<<2))
		{
			PORTB |=(1<<6)
		} 
		else
		{
			PORTB &=~(1<<6)
		}
    }
}

