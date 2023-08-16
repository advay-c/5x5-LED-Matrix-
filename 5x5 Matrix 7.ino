#include <avr/io.h>
#include <avr/interrupt.h>

int main()
{
  DDRB = 0xFF;
  DDRC = 0xFF;
  PORTB = 0xFF;
  PORTC = 0b00000000;
  while(1)
  {
    for (int j = 0; j <= 4; j++)
    {
      PORTC = 1 << (j);
      for (int i = 0; i <= 0; i++)
      {
        PORTB = ~(1 << (i));
        _delay_ms(150);
      }
}
  }
}
