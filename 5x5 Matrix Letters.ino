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
  ADVAYE();
  _delay_ms(1);
  }
  {
    ADVAYF();
    _delay_ms(1);
  }
  {
    ADVAYG();
    _delay_ms(1);
  }
}
    void ADVAYE()
    {
    PORTC = 0x01;// start for e
    PORTB = 0b11111110;
    _delay_ms(1);
    PORTC = 0b00000010;
    _delay_ms(1);
     PORTC = 0b00000100;
     _delay_ms(1);
     PORTC = 0b00001000;
     _delay_ms(1);
     PORTC = 0b00010000;
     _delay_ms(1);
     PORTB = 0b11111110;
     _delay_ms(1);
     PORTB = 0b11111101;
     _delay_ms(1);
     PORTB = 0b11111011;
     _delay_ms(1);
     PORTB = 0b11110111;
     _delay_ms(1);
     PORTB = 0b11101111;
     _delay_ms(1);
     PORTB = 0b11111011;
     PORTC = 0b00000001;
     _delay_ms(1);
     PORTC = 0b00000010;
     _delay_ms(1);
     PORTC = 0b00000100;
     _delay_ms(1);
     PORTC = 0b00001000;
     _delay_ms(1);
     PORTB = 0b11101111;
     PORTC = 0b00000001;
     _delay_ms(1);
     PORTC = 0b00000010;
     _delay_ms(1);
     PORTC = 0b00000100;
     _delay_ms(1);
     PORTC = 0b00001000;
     _delay_ms(1); // end for e
  }
  void ADVAYF()
  {
      PORTC = 0x01;// start for F
    PORTB = 0b11111110;
    _delay_ms(1);
    PORTC = 0b00000010;
    _delay_ms(1);
     PORTC = 0b00000100;
     _delay_ms(1);
     PORTC = 0b00001000;
     _delay_ms(1);
     PORTC = 0b00010000;
     _delay_ms(1);
     PORTB = 0b11111110;
     _delay_ms(1);
     PORTB = 0b11111101;
     _delay_ms(1);
     PORTB = 0b11111011;
     _delay_ms(1);
     PORTB = 0b11110111;
     _delay_ms(1);
     PORTB = 0b11101111;
     _delay_ms(1);
     PORTB = 0b11111011;
     PORTC = 0b00000001;
     _delay_ms(1);
     PORTC = 0b00000010;
     _delay_ms(1);
     PORTC = 0b00000100;
     _delay_ms(1);
     PORTC = 0b00001000;
     _delay_ms(1);//end for f
  }
  void ADVAYG()
  {
    PORTC = 0b00000001;// start for G
    PORTB = 0b11111110;
    _delay_ms(1);
    PORTC = 0b00000010;
    _delay_ms(1);
    PORTC = 0b00000100;
    _delay_ms(1);
    PORTC = 0b00001000;
    _delay_ms(1);
    PORTB = 0b11111101;
    PORTC = 0b00010000;
    _delay_ms(1);
    PORTB = 0b11111011;
    PORTC = 0b00000010;
    _delay_ms(1);
    PORTC = 0b00000100;
    _delay_ms(1);
    PORTC = 0b00010000;
    _delay_ms(1);
    PORTB = 0b11110111;
    PORTC = 0b00000010;
    _delay_ms(1);
    PORTC = 0b00010000;
    _delay_ms(1);
    PORTB = 0b11101111;
    PORTC = 0b00000010;
    _delay_ms(1);
    PORTC = 0b00000100;
    _delay_ms(1);
    PORTC = 0b00001000;
    _delay_ms(1);
    PORTC = 0b00010000;
    _delay_ms(1);//end for g
  }
  
