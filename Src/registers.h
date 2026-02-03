/*
 * registers.h
 *
 *  Created on: Feb 2, 2026
 *      Author: schellingerjf
 */

#ifndef REGISTERS_H_
#define REGISTERS_H_

typedef struct
{
	volatile uint32_t RCC_CR;
	volatile uint32_t RCC_PLLCFGR;
	volatile uint32_t RCC_CFGR;
	volatile uint32_t RCC_CIR;
	volatile uint32_t AHB1RSTR;
	volatile uint32_t AHB2RSTR;
	volatile uint32_t RESERVED_0x18;
	volatile uint32_t RESERVED_0x1C;
	volatile uint32_t RCC_APB1RSTR;
	volatile uint32_t RCC_APB2RSTR;
	volatile uint32_t RESERVED_0x28;
	volatile uint32_t RESERVED_0x2C;
	volatile uint32_t RCC_AHB1ENR;
	volatile uint32_t RCC_AHB2ENR;
	volatile uint32_t RESERVED_0x38;
	volatile uint32_t RESERVED_0x3C;
	volatile uint32_t RCC_APB1ENR;
	volatile uint32_t RCC_APB2ENR;
	volatile uint32_t RESERVED_0x48;
	volatile uint32_t RESERVED_0x4C;
	volatile uint32_t RCC_AHB1LPENR;
	volatile uint32_t RCC_AHB2LPENR;
	volatile uint32_t RESERVED_0x58;
	volatile uint32_t RESERVED_0x5C;
	volatile uint32_t RCC_APB1LPENR;
	volatile uint32_t RCC_APB2LPENR;
	volatile uint32_t RESERVED_0x68;
	volatile uint32_t RESERVED_0x6C;
	volatile uint32_t RCC_BDCR;
	volatile uint32_t RCC_CSR;
	volatile uint32_t RESERVED_0x78;
	volatile uint32_t RESERVED_0x7C;
	volatile uint32_t RCC_SSCGR;
	volatile uint32_t RCC_PLLI2SCFGR;
	volatile uint32_t RESERVED_0x88;
	volatile uint32_t RCC_DCKCFGR;
} RCC;

typedef struct
{
	volatile uint32_t MODER;
	volatile uint32_t OTYPER;
	volatile uint32_t OSPEEDR;
	volatile uint32_t PUPDR;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t LCKR;
	volatile uint32_t AFRL;
	volatile uint32_t AFRH;
} GPIO;

#endif /* REGISTERS_H_ */
