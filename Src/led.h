/**
 * Name: Joel Schellinger
 * Course: CPE2610
 * Assignment: Lab3
 * Dependencies: none
 * Description: Header file for LED API includes utils and defines prototypes
 */

#ifndef LED_H_
#define LED_H_

#include <stdint.h>
#include "regaddr.h"

void initLeds();
void setLeds(uint8_t pattern);
uint8_t getLeds();
void writeLed(uint8_t index, uint8_t offOn);
void toggleLed(uint8_t index);

#endif /* LED_H_ */
