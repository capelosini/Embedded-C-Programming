#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // BASE ADDRESS = 0x20
    // DDRB CONTROLLER ADDRESS = 0x04
    // DDRB |= _BV(DDB0);
    * (volatile uint8_t *) (0x20 + 0x04) |= 1;

    while (1){
        // BASE ADDRESS = 0x20
        // PORTB CONTROLLER ADDRESS = 0x05
        // PORTB ^= _BV(PB0);
        *(volatile uint8_t *) (0x20+0x05) ^= 1;
        _delay_ms(500);
    }

    return 0;
}