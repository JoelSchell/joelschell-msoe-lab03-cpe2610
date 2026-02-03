/**
 * Name: Joel Schellinger
 * Course: CPE2610
 * Assignment: Lab3
 * Dependencies: none
 * Description: LED API
 */

#include "led.h"

// The pin numbers used for the LEDs are 8...11
#define LED_8   8U
#define LED_9   9U
#define LED_10  10U
#define LED_11  11U

/** Define the masks for setting the gpio pins to output mode **/
#define MODER_MASK 0b01

 // Ouput mask is 2 bits long shift by pin_num*2
#define LED_MODER(pin_num) (MODER_MASK << (pin_num*2))

// & all the output mode to create the full mask 
#define LED_MODER_BITMASK (   \
    LED_MODER(LED_8)  |  \
    LED_MODER(LED_9)  |  \
    LED_MODER(LED_10) |  \
    LED_MODER(LED_11)    \
)

void initLeds()
{
    // Define pointers to the necessary registers
    volatile uint32_t* rcc_ahb1enr = (uint32_t*)RCC_AHB1ENR;
    volatile uint32_t* gpioa_moder = (uint32_t*)GPIOA_MODER;

    *rcc_ahb1enr |= GPIOAEN_MASK; // Enable GPIOA clock

    // Enable output mode (reset value: 0xA800 0000 no need to &= invert)
    *gpioa_moder |= LED_MODER_BITMASK; 
}

void setLeds(uint8_t pattern)
{
    volatile uint32_t* gpioa_bsrr = (uint32_t*) GIPOA_BSRR;

    // This optimization can be done because pins are all next to each other.
    *gpioa_bsrr = (pattern << LED_8) | ((~pattern & 0xF) << LED_8 + 16);
}

uint8_t getLeds()
{
    // TODO
}

void writeLed(uint8_t index, uint8_t offOn)
{
    // TODO
}

void toggleLed(uint8_t index)
{
    // TODO
}
