#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRD |= 0xFF;
	TCCR1A |= 1<<WGM11 | 1<<COM1A1 | 1<<COM1A0;
	TCCR1B |= 1<<WGM13 | 1<<WGM12 | 1<<CS10;
	ICR1 = 19999;

	

	while(1){
	
		OCR1A = ICR1 - 1600;
		_delay_ms(4000);
		OCR1A=ICR1-1190;
		_delay_ms(4000);
		OCR1A = ICR1 - 700;
		_delay_ms(4000);
	}
	}