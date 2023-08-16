#include <avr/io.h>
#include <avr/interrupt.h>

int main()
{
  DDRB = 0xFF;
  DDRC = 0xFF;
  PORTB = 0xFF;
  PORTC = 0x00;
  while(1)
  {
    PORTC = 0x01;
    PORTB = 0xFC;
    _delay_ms(100);
    PORTB = 0xFD;
    _delay_ms(100);
    PORTB = 0xF7;
    _delay_ms(100);
    PORTB = 0xEF;
    _delay_ms(100);
  }
}
