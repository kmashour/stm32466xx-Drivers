#ifndef RCC_priv_H_
#define RCC_priv_H_

/*******************************************
******** Peripheral Option definitions**
********************************************/


/*****RCC_CFGR OPTIONS***/
#define RCC_SW_HSI 00
#define RCC_SW_HSE 01
#define RCC_SW_PLLP 10
#define RCC_SW_PLLR 11

/*some common macros for RCC*/
#define RCC_CLOCKREADY 1
#define RCC_CLOCKNOTREADY 0
#define RCC_SW_CLR_MASK 0b11





#endif
