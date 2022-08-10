
#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>
#include "avr/interrupt.h"

int main(void)
{

    while (1) 
    {
    }
}
void time_delay()
{
	for(unsigned int j=0;j<=1000;j++)
	{	
	for(unsigned int i=0;i<=10;i++)
	{
	TCNT0=155;
	TCCR0=0x02;//prescalar of 8;
	while((TIFR & 0x01)==0);
	TCCR0=0;
	TIFR |=(1<<0);
	}
	}
}
