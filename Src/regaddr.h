/**
 * Name: Joel Schellinger
 * Course: CPE2610
 * Assignment: Lab2
 * Dependencies: none
 * Description: Portable Header file containing STM32F411 Addresses and Control Bit Masks
 */

#ifndef REGADDR_H_
#define REGADDR_H_

///Complete this file by adding address and 
/// creating masks for necessary control signals.
///Address can be calculated using the Memory Map(Section 2.3)
///  and Register Maps at the end of the documentation for each 
///  component.
///This file can be modified to add future registers and masks.

//RCC
#define RCC_AHB1ENR 0x40023830
#define GPIOAEN_MASK (1<<0)
#define GPIOBEN_MASK (1<<1)

#define RCC_APB1ENR 0x40023840
#define USART2EN_MASK (1<<17)

//GPIOA
#define GPIOA_MODER 0x40020000
#define GPIOA_PUPDR 0x4002000C
#define GPIOA_IDR 	0x40020010
#define GPIOA_ODR 	0x40020014
#define GIPOA_BSRR  0x40020018
#define GPIOA_AFRL  0x40020020

//GPIOB
#define GPIOB_MODER 0x40020400
#define GPIOB_PUPDR 0x4002040C
#define GPIOB_IDR 	0x40020410
#define GPIOB_ODR	0x40020414
#define GIPOB_BSRR  0x40020418
#define GPIOB_AFRL  0x40020420

//UART
#define USART2_SR   0x40004400
#define USART2_DR   0x40004404
#define USART2_BRR  0x40004408
#define USART2_CR1  0x4000440C
#define USART2_CR2  0x40004410
#define USART2_CR3  0x40004414

// CR1 bits
#define UE_MASK (1<<13)
#define TE_MASK (1<<3)
#define RE_MASK (1<<2)

// SR control bits
#define TXE_MASK (1<<7)
#define RXNE_MASK (1<<6)

#endif /* REGADDR_H_ */
