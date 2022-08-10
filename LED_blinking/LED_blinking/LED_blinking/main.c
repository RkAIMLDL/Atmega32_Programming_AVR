#define F_CPU 16000000L
#include <avr/io.h>
#include<util/delay.h>
#define led_On() PORTB |=(1<<4);
#define led_off() PORTB &=~(1<<4);
/*
int led_On() 
{
	return PORTB |=(1<<4);
}
int led_off() 
{
	return PORTB &=~(1<<4);
}*/
int main(void)
{
	DDRB |=(1<<4);
    while (1) 
    {
		led_On();
		//PORTB |=(1<<4);
		_delay_ms(1000);
		led_off();
	//	PORTB &=~(1<<4);
		_delay_ms(1000);
    }
}

