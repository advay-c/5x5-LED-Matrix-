#include <avr/io.h>
#include <avr/interrupt.h>

int main()
{
  DDRB = 0b11111111;
  DDRC = 0b11111111;
  PORTB = 0b11111111;
  PORTC = 0b00000000;
  while(1)
  {
    PORTC = 0x01;
    PORTB = 0b11111101;
    _delay_ms(1);
    PORTB = 0b11110111;
    _delay_ms(1);
    PORTC = 0x02;
    PORTB = 0b11111110;
    _delay_ms(1);
    PORTB = 0b11111011;
    _delay_ms(1);
     PORTB = 0b11101111;
    _delay_ms(1);
    PORTC = 0b00000100;
    PORTB = 0b11111110;
    _delay_ms(1);
    PORTB = 0b11111011;
    _delay_ms(1);
    PORTB = 0b11101111;
    _delay_ms(1);
    PORTC = 0b00001000;
    PORTB = 0b11111110;
    _delay_ms(1);
    PORTB = 0b11111011;
    _delay_ms(1);
    PORTB = 0b11101111;
    _delay_ms(1);
    PORTC = 0b00010001;
    PORTB = 0b11111101;
    _delay_ms(1);
    PORTB = 0b11110111;
    _delay_ms(1);
  }
}
