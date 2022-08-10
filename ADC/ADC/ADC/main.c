
#include <avr/io.h>


int main(void)
{

    while (1) 
    {
    }
}
    int adc_read(char channel)
    {
		unsigned char a,result;
	    ADMUX=channel;
		ADCSRA=0x80;
		ADCH=0x00;
		ADCL=0x00;
		ADCSRA|=(1<<6);
		while(!(ADCSRA&0x40));
		a=ADCL;
		result=ADCH;
		result=(result<<8);
		result=result|a;
		return result;
		
    }
