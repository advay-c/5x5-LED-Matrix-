#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

void ADVAYE();
void ADVAYF();
void ADVAYG();

int main()
{
    DDRB = 0xFF;
    DDRC = 0xFF;
    PORTB = 0xFF;
    PORTC = 0x00;

    while (1)
    {
        ADVAYE();
        _delay_ms(1);
        
        ADVAYF();
        _delay_ms(1);
        
        ADVAYG();
        _delay_ms(1);
    }

    return 0;
}

void ADVAYE()
{
    PORTC = 0x01; // start for e
    PORTB = 0xFE;
    _delay_ms(1);
    PORTC = 0x02;
    _delay_ms(1);
    PORTC = 0x04;
    _delay_ms(1);
    PORTC = 0x08;
    _delay_ms(1);
    PORTC = 0x10;
    _delay_ms(1);
    PORTB = 0xFE;
    _delay_ms(1);
    PORTB = 0xFD;
    _delay_ms(1);
    PORTB = 0xFB;
    _delay_ms(1);
    PORTB = 0xF7;
    _delay_ms(1);
    PORTB = 0xEF;
    _delay_ms(1);
    PORTB = 0xFB;
    PORTC = 0x01;
    _delay_ms(1);
    PORTC = 0x02;
    _delay_ms(1);
    PORTC = 0x04;
    _delay_ms(1);
    PORTC = 0x08;
    _delay_ms(1);
    PORTB = 0xEF;
    PORTC = 0x01;
    _delay_ms(1);
    PORTC = 0x02;
    _delay_ms(1);
    PORTC = 0x04;
    _delay_ms(1);
    PORTC = 0x08;
    _delay_ms(1); // end for e
}

void ADVAYF()
{
    PORTC = 0x01; // start for F
    PORTB = 0xFE;
    _delay_ms(1);
    PORTC = 0x02;
    _delay_ms(1);
    PORTC = 0x04;
    _delay_ms(1);
    PORTC = 0x08;
    _delay_ms(1);
    PORTC = 0x10;
    _delay_ms(1);
    PORTB = 0xFE;
    _delay_ms(1);
    PORTB = 0xFD;
    _delay_ms(1);
    PORTB = 0xFB;
    _delay_ms(1);
    PORTB = 0xF7;
    _delay_ms(1);
    PORTB = 0xEF;
    _delay_ms(1);
    PORTB = 0xFB;
    PORTC = 0x01;
    _delay_ms(1);
    PORTC = 0x02;
    _delay_ms(1);
    PORTC = 0x04;
    _delay_ms(1);
    PORTC = 0x08;
    _delay_ms(1); // end for f
}

void ADVAYG()
{
    PORTC = 0x01; // start for G
    PORTB = 0xFE;
    _delay_ms(1);
    PORTC = 0x02;
    _delay_ms(1);
    PORTC = 0x04;
    _delay_ms(1);
    PORTC = 0x08;
    _delay_ms(1);
    PORTB = 0xFD;
    PORTC = 0x10;
    _delay_ms(1);
    PORTB = 0xFB;
    PORTC = 0x02;
    _delay_ms(1);
    PORTC = 0x04;
    _delay_ms(1);
    PORTC = 0x10;
    _delay_ms(1);
    PORTB = 0xF7;
    PORTC = 0x02;
    _delay_ms(1);
    PORTC = 0x10;
    _delay_ms(1);
    PORTB = 0xEF;
    PORTC = 0x02;
    _delay_ms(1);
    PORTC = 0x04;
    _delay_ms(1);
    PORTC = 0x08;
    _delay_ms(1);
    PORTC = 0x10;
    _delay_ms(1); // end for g
}
