#include <xc.h>


#pragma config FOSC = INTRCIO   // Oscillator Selection bits (INTOSC oscillator: I/O function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RA3/MCLR pin function select (RA3/MCLR pin function is MCLR)
#pragma config BOREN = ON       // Brown-out Detect Enable bit (BOD enabled)
#pragma config CP = OFF         // Code Protection bit (Program Memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#define _XTAL_FREQ 4000000

void main() 
{

    TRISC = 0b00000000;// TRISC PORTS AS output
    
    while(1)
    {
        PORTCbits.RC0 = 1; //RC0
        __delay_ms(500);
        PORTCbits.RC0 = 0;
        __delay_ms(500);
        
    }
}