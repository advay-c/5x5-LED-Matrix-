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
      for (int i = 0; i <= 3; i++)
      {
        PORTB = ~(1 << (i));
        _delay_ms(100);
    }
    }
    for (int j = 0; j <= 4; j++)
    {
      PORTC = 1 << (j);
      for (int i = 4; i <= 4; i++)
      {
        PORTB = ~(1 << (i));
        _delay_ms(100);
      }
}
          for (int j=4; j >= 4; j--)
    {
PORTC = 1 << (j);
    for (int i=3; i >= 0; i--)
    {
PORTB = ~(1 << (i));
_delay_ms(100);
  }
}
          for (int j=3; j >= 0; j--)
    {
PORTC = 1 << (j);
    for (int i=0; i >= 0; i--)
    {
PORTB = ~(1 << (i));
_delay_ms(100);
  }
}
  }
}
