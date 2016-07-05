#include <htc.h>
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_ON & CP_OFF);

#define _XTAL_FREQ 20000000
void main()
{
	TRISA = 0x1c;
	TRISB = 0x00;

	{
		__delay_ms(5000);
		PORTA = 0x1F;
		PORTB = 0xFF;
		__delay_ms(400);
		PORTA = 0x1F;
		PORTB = 0xFE;
		__delay_ms(800);
		PORTA = 0x1F;
		PORTB = 0xFC;
		__delay_ms(1200);
		PORTA = 0x1F;
		PORTB = 0xF8;
		__delay_ms(300);
		PORTA = 0x1F;
		PORTB = 0xF0;
		__delay_ms(100);
		PORTA = 0x1F;
		PORTB = 0xE0;
		__delay_ms(1500);
		PORTA = 0x1F;
		PORTB = 0xC0;
		__delay_ms(300);
		PORTA = 0x1F;
		PORTB = 0x80;
		__delay_ms(200);
		PORTA = 0x1F;
		PORTB = 0x00;
		__delay_ms(2000);
		PORTA = 0x1F;
		PORTB = 0xFF;
		__delay_ms(1000);
	}
	while(1)
	{
		PORTA = 0x1F;
		PORTB = 0x7D;
		__delay_ms(5000);
		PORTA = 0x1F;
		PORTB = 0xBD;
		__delay_ms(750);
		PORTA = 0x1F;
		PORTB = 0xDD;
		__delay_ms(500);
		PORTA = 0x1F;
		PORTB = 0xD7;
		__delay_ms(5000);
		PORTA = 0x1F;
		PORTB = 0xDB;
		__delay_ms(750);
		PORTA = 0x1F;
		PORTB = 0xDD;
		__delay_ms(500);
	}
}