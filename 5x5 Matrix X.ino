#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

int main()
{
    DDRB = 0xFF;
    DDRC = 0xFF;
    PORTB = 0xFF;
    PORTC = 0x00;

    while (1)
    {
        PORTC = 0x01;
        PORTB = 0xFE;
        _delay_ms(1);
        PORTC = 0x02;
        PORTB = 0xFD;
        _delay_ms(1);
        PORTC = 0x04;
        PORTB = 0xFB;
        _delay_ms(1);
        PORTC = 0x08;
        PORTB = 0xF7;
        _delay_ms(1);
        PORTC = 0x10;
        PORTB = 0xEF;
        _delay_ms(1);
    }

    return 0;
}
