/*
 * STM32F446.H
 *
 *  Created on: Oct 28, 2022
 *      Author: Halal - Store
 */

#ifndef STM32F446XX_H_
#define STM32F446XX_H_
/***********************************************************************************************/
/**********************************************************************************************/
/****************************** Author: Karim magdy*******************************************/
/****************************** LAYER : LIB *************************************************/
/****************************** SWC   : STM32F401xx device**********************************/
/****************************** version:1.00***********************************************/
/*****************************************************************************************/
/****************************************************************************************/

/*
notes for me : 1- we only write base address like in flash and sram in case of 446 or any peripheral because
                  there are register or location based on the base address this location are far away with offset
				  from the base address.
*/

/******************************Memories base addresses***********************************/
#define   FLASH_BASE_ADDRESS (0x08000000UL)
#define   SRAM1_BASE_ADDRESS (0X2000000UL)
/*CALCULATED MANUALLY ->REF MANUAL MEM ARCHITECTURE TO KNOW SIZES OF SRAM*/
#define   SRAM2_BASE_ADDRESS (0X2001C00UL)
/*OR  I CAN DEAL WITH SRAM FROM SRAM1 TO SRAM2 AS A LOKSHA BLOCK KDA 3LA BA3DO*/
#define   SRAM (SRAM1_BASE_ADDRESS)
#define   ROM (0x1FFF0000UL)
/**********************************BUS DOMAINS BASE ADDRESSES***********************************/
#define AHB1_BASE_ADDRESS_   (0x40020000UL)
#define AHB2_BASE_ADDRESS_   (0x50000000UL)
#define AHB3_BASE_ADDRESS_   (0x60000000UL)
#define APB1_BASE_ADDRESS_   (0x40000000UL)
#define APB2_BASE_ADDRESS_   (0x40010000UL)
/***********************************AHB1 Peripheral base addresses ****************************/
#define GPIOA_BASE_ADDRESS_  (AHB1_BASE_ADDRESS_)
#define GPIOB_BASE_ADDRESS_  (GPIOA_BASE_ADDRESS_+GPIO_ADDRESS_OFFSET)
#define GPIOC_BASE_ADDRESS_	 (GPIOB_BASE_ADDRESS_+GPIO_ADDRESS_OFFSET)
#define GPIOD_BASE_ADDRESS_  (GPIOC_BASE_ADDRESS_+GPIO_ADDRESS_OFFSET)
#define GPIOE_BASE_ADDRESS_  (GPIOD_BASE_ADDRESS_+GPIO_ADDRESS_OFFSET)
#define GPIOF_BASE_ADDRESS_  (GPIOE_BASE_ADDRESS_+GPIO_ADDRESS_OFFSET)
#define GPIOG_BASE_ADDRESS_  (GPIOF_BASE_ADDRESS_+GPIO_ADDRESS_OFFSET)
#define GPIOH_BASE_ADDRESS_  (GPIOG_BASE_ADDRESS_+GPIO_ADDRESS_OFFSET)
#define RCC_BASE_ADDRESS_    (0x40023800UL)
#define DMA1_BASE_ADDRESS_   (0x40026000UL)
#define DMA2_BASE_ADDRESS_   (0x40026400UL)

/***********************************APB1 Peripheral base addresses ****************************/
/***********************************APB2 Peripheral base addresses ****************************/

/*********************************** RCC Register definition structure ***********************/
typedef struct
{
	u32 volatile CR; /*RCC clock control register*/
	u32 volatile PLLCFGR; /*RCC pll configuration register*/
	u32 volatile CFGR;
	u32 volatile CIR;
	u32 volatile AHB1RSTR;
	u32 volatile AHB2RSTR;
	u32 volatile AHB3RSTR;
	u32 volatile Reserved0;
	u32 volatile APB1RSTR;
	u32 volatile APB2RSTR;
	u32 volatile Reserved1;
	u32 volatile AHB1ENR;
	u32 volatile AHB2ENR;
	u32 volatile AHB3ENR;
	u32 volatile Reserved2;
	u32 volatile APB1ENR;
	u32 volatile APB2ENR;
	u32 volatile Reserved3;
	u32 volatile AHB1LPENR;
	u32 volatile AHB2LPENR;
	u32 volatile AHB3LPENR;
	u32 volatile Reserved4;
	u32 volatile APB1LPENR;
	u32 volatile APB2LPENR;
    u32 volatile Reserved5;
	u32 volatile Reserved6;
	u32 volatile BDCR;
	u32 volatile CSR;
}RCC_RegDef_t;

/*********************************** RCC Peripheral definitions *****************************/
#define RCC       ((volatile RCC_RegDef_t*)(RCC_BASE_ADDRESS_))
/*********************************** RCC Peripheral bits definitions ***********************/

/****RCC_CR BITS****/
#define HSION (0)
#define HSIRDY (1)
#define HSITRIM (3)        /*Bit 3->7 is for trim i.e 5bits*/
#define HSICAL (8)        /*READ ONLY 7 BITS*/
#define HSEON (16)
#define HSERDY (17)
#define HSEBYP (18)
#define CSSON  (19)
#define PLLON  (24)
#define PLLRDY (25)
#define PLLI2SON (26)
#define PLLI2SRDY (27)
#define PLLSAION (28)
#define PLLSAIRDY (29)
/****RCC_CFGR BITS**not finished**/
#define SW (0)
#define SWS (1*2)
/****RCC_AHB1RSTR**not finished**/
#define GPIOARST (0)
#define GPIOBRST (1)
#define GPIOCRST (2)
#define GPIODRST (3)
#define GPIOERST (4)
#define GPIOFRST (5)
#define GPIOGRST (6)

/*********************************** GPIO Register definition structure ***********************/
/*********************************** GPIO Peripheral definitions *****************************/

/*********************************** SOME COMMON USED MACROS *******************************/
#define GPIO_ADDRESS_OFFSET (0x400UL)
#define ENABLE (1)
#define DISABLE (0)
#define BIT_CLR_MASK (0)
#define AHB1 (1)
#define AHB2 (2)
#define AHB3 (3)
#define APB1 (4)
#define APB2 (5)
#define APB3 (6)



#endif /* STM32F446XX_H_ */
