#include <avr/io.h>
#include <avr/interrupt.h>

int main()
{
  DDRC = 0b11111111;
  DDRB = 0b11111111;
  PORTB = 0b11111111;
  PORTC = 0b00000000;
  while(1)
  {
    PORTC = 0x01;
    PORTB = 0b11111110;
    _delay_ms(200);
    PORTC = 0b00000010;
    _delay_ms(200);
     PORTC = 0b00000100;
     _delay_ms(200);
     PORTC = 0b00001000;
     _delay_ms(200);
     PORTC = 0b00010000;
     _delay_ms(200);
  }
}
