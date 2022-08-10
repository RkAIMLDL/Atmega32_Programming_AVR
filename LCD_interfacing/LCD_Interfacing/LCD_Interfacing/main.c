#define F_CPU 16000000L
#include <avr/io.h>
#include "util/delay.h"


#define rs_high() PORTD |=(1<<2)
#define rs_low() PORTD &=~(1<<2)

#define en_high() PORTD |=(1<<3)
#define en_low() PORTD &=~(1<<3)
 #define lcd_port PORTB
 
void lcd_cmd(unsigned char cmd)
 {
	 lcd_port=cmd;
	 rs_low();
	 en_high();
	 _delay_ms(1);
	 en_low(); 
 }
void lcd_data(unsigned char data)
  {
	  lcd_port=data;
	 rs_high();
	  en_high();
	  _delay_ms(1);
	  en_low();
  }
  void lcd_init()
  {
	  lcd_cmd(0x38);
	  _delay_ms(500);
	 lcd_cmd(0x02);
	  _delay_ms(500);
	  lcd_cmd(0x01);
	_delay_ms(500);
	lcd_cmd(0x0C);
	_delay_ms(500);
	lcd_cmd(0x06);
	_delay_ms(500);
	 lcd_cmd(0x80);
	 _delay_ms(500);
	  
	  
  }


int main(void)
{
	DDRB =0xff;
	DDRD |=(1<<2);
	DDRD |=(1<<3);
	lcd_init();
	
	lcd_data('H');
	lcd_data('A');
	lcd_data('R');
	lcd_data('E');
	lcd_data(' ');
	lcd_data('K');
	lcd_data('R');
	lcd_data('I');
	lcd_data('S');
	lcd_data('H');
	lcd_data('N');
	lcd_data('A');
    
    while (1) 
    {
    }
}

