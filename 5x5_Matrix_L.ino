#include <avr/io.h>
#include <util/delay.h>

int main()
{
    DDRB = 0b11111111; // Set all PORTB pins as outputs
    DDRC = 0b00000111; // Set PC0, PC1, and PC2 as outputs (for rows)
    PORTB = 0b11111111; // Turn off all LEDs on PORTB (assuming they are common-anode)
    PORTC = 0b00000000; // Turn off all rows on PORTC (assuming they are connected to anode)

    // Define the custom pattern for the "L"
    uint8_t lPattern[3] = {
        0b11111000, // Top row (PB5 to PB0)
        0b00000000, // Middle row (PB5 to PB0)
        0b00000000  // Bottom row (PB5 to PB0)
    };

    while(1)
    {
        for (int j = 0; j <= 2; j++)
        {
            // Display the "L" row by row
            PORTC = 1 << j; // Enable the corresponding row (PC0, PC1, or PC2)
            PORTB = ~(lPattern[j]); // Apply the pattern to PORTB (LED columns)
            _delay_ms(150);
        }
    }
    return 0;
}
