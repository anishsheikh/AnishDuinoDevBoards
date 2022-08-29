#define F_CPU 16000000UL // 16 MHz clock speed
#include <xc.h>
#include <util/delay.h>

#define LEDPIN 5

int main()
{
	DDRD = (1<<LEDPIN);           // Configure PORTD5 as output

	while(1)
	{
		PORTD = (1<<LEDPIN);        // Turn ON Led connected to PORTD5
		_delay_ms(1000);      // Wait for some time
		PORTD = (0<<LEDPIN);        // Turn OFF Led connected to PORTD5
		_delay_ms(1000);      // Wait for some time
	}
	return 0;
}