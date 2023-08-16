#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

int main()
{
    DDRC = 0xFF;
    DDRB = 0xFF;
    PORTB = 0xFE;
    PORTC = 0x00;
    
    while (1)
    {
        PORTC = 0x01;
        PORTB = 0xFE;
        _delay_ms(200);
        PORTC = 0x02;
        _delay_ms(200);
        PORTC = 0x04;
        _delay_ms(200);
        PORTC = 0x08;
        _delay_ms(200)
        PORTC = 0x10;
        _delay_ms(200);
    }
    }
