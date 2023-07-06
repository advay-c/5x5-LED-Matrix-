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
    PORTB = 0b11111110;
    PORTC = 0b00000001;
    _delay_ms(150);
    PORTC = 0b00000010;
    _delay_ms(150);
    PORTC = 0b00000100;
    _delay_ms(150);
    PORTC = 0b00001000;
    _delay_ms(150);
    PORTC = 0b00010000;
    _delay_ms(150);
    PORTB = 0b11111101;
    PORTC = 0b00001000;
    _delay_ms(150);
    PORTC = 0b00000100;
    _delay_ms(150);
    PORTC = 0b00000010;
    _delay_ms(150);
    PORTB = 0b11111011;
    PORTC = 0b00000001;
    _delay_ms(150);
    PORTC = 0b00000010;
    _delay_ms(150);
    PORTC = 0b00000100;
    _delay_ms(150);
    PORTC = 0b00001000;
    _delay_ms(150);
    PORTB = 0b11110111;
    PORTC = 0b00010000;
    _delay_ms(150);
    PORTC = 0b00001000;
    _delay_ms(150);
    PORTC = 0b00000100;
    _delay_ms(150);
    PORTC = 0b00000010;
    _delay_ms(150);
    PORTB = 0b11101111;
    PORTC = 0b00000001;
    _delay_ms(150);
    PORTC = 0b00000010;
    _delay_ms(150);
    PORTC = 0b00000100;
    _delay_ms(150);
    PORTC = 0b00001000;
    _delay_ms(150);
    PORTC = 0b00010000;
    _delay_ms(150);
  }
}
