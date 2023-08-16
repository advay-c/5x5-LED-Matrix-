#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

int main()
{
    DDRB = 0xFF; // Set all pins of PORTB as outputs
    DDRC = 0xFF; // Set all pins of PORTC as outputs
    PORTB = 0xFF; // Set initial value for PORTB
    PORTC = 0x00; // Set initial value for PORTC
    
    while(1)
    {
        // Loop through different patterns
        for (int pattern = 0; pattern < 4; ++pattern)
        {
            switch(pattern)
            {
                case 0:
                    PORTC = 0x01;
                    break;
                case 1:
                    PORTC = 0x02;
                    break;
                case 2:
                    PORTC = 0x04;
                    break;
                case 3:
                    PORTC = 0x08;
                    break;
                default:
                    break;
            }
            
            // Loop through different LED states within the pattern
            for (int state = 0; state < 4; ++state)
            {
                switch(state)
                {
                    case 0:
                        PORTB = 0xFE; // 11111110
                        break;
                    case 1:
                        PORTB = 0xFB; // 11111011
                        break;
                    case 2:
                        PORTB = 0xF7; // 11110111
                        break;
                    case 3:
                        PORTB = 0xED; // 11101101
                        break;
                    default:
                        break;
                }
                
                _delay_ms(1); 
            }
        }
    }
    return 0;
}
