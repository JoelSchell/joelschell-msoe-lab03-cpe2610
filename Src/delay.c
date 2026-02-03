#include <stdint.h>
#define DELAY_CALIBRATION 1106

void delay_ms(uint32_t ms)
{
	for (volatile i = 0; i < ms*DELAY_CALIBRATION; i++);
}

void delay_ms_pause_check(uint32_t ms)
{
	volatile uint32_t* const key = (uint32_t*) (0x40020010);
	while (!(*key & 1U)); // Wait for user input to pause program
	for (volatile i = 0; i < ms*DELAY_CALIBRATION; i++);
	while (!(*key & 1U)); // Wait for user input to pause program
}
