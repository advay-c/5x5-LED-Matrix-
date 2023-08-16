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
    for (int j = 0; j <= 0; j++)
    {
      PORTC = 1 << (j);
      for (int i = 0; i <= 4; i++)
      {
        PORTB = ~(1 << (i));
        _delay_ms(1);

  }
    }
                  for (int j=4; j >= 1; j--)
    {
PORTC = 1 << (j);
    for (int i=0; i >= 0; i--)
    {
PORTB = ~(1 << (i));
_delay_ms(1);
        {
          _delay_ms(150);
          PORTC = 0b00000000;
        }
  }
}
    PORTC = 0b00000001;
PORTB = 0b11111110;
_delay_ms(1);
PORTC = 0b00000010;
PORTB = 0b11111101;
_delay_ms(1);
PORTC = 0b00000100;
PORTB = 0b11111011;
_delay_ms(1);
PORTC = 0b00001000;;
PORTB = 0b11110111;
_delay_ms(1);
PORTC = 0b00010000;
PORTB = 0b11101111;
_delay_ms(1);
  }
}
