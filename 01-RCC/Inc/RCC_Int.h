#ifndef RCC_Int_H_
#define RCC_Int_H_

typedef enum
	 {ok=1, nok=0 }ErrorState_t;

/****Important macros****/
#define RCC_AHB1 AHB1
#define RCC_AHB2 AHB2
#define RCC_AHB3 AHB3
#define RCC_APB1 APB1
#define RCC_APB2 APB2
#define RCC_APB3 APB3
#define RCC_CLKSRC_ON ENABLE
#define RCC_CLKSRC_OFF DISABLE



/****RCC_CR****/
#define RCC_HSI HSION
#define RCC_HSIREADY HSIRDY
#define RCC_HSITRIM HSITRIM
#define RCC_HSICAL HSICAL
#define RCC_HSE HSEON
#define RCC_HSERDY HSERDY
#define RCC_HSEBYP HSEBYP
#define RCC_CSS CSSON
#define RCC_PLL PLLON
#define RCC_PLLRDY PLLRDY
#define RCC_PLLI2S PLLI2SON
#define RCC_PLLI2SRDY PLLI2SRDY
#define RCC_PLLSAI PLLSAION
#define RCC_PLLSAIRDY PLLSAIRDY
/****RCC_CFGR**not completed**/
#define RCC_SW SW
#define RCC_SWS SWS
/****RCC_AHB1RSTR**not completed**/
#define RCC_GPIOA GPIOARST
#define RCC_GPIOB GPIOBRST
#define RCC_GPIOC GPIOCRST
#define RCC_GPIOD GPIODRST
#define RCC_GPIOE GPIOERST
#define RCC_GPIOF GPIOFRST
#define RCC_GPIOG GPIOGRST
#define RCC_GPIOH GPIOHRST

ErrorState_t MDIO_ErrorStateRccInt(u8 A_u8CopyClockName ,u8 A_u8CopyClockState );
ErrorState_t MDIO_ErrorstateRccSelectSysClock(u8 A_u8CopyClockName );
ErrorState_t MDIO_ErrorStateRccPllConfig(/****/);
ErrorState_t MDIO_ErrorStateRccPllSysClockSelect(/****/);
ErrorState_t MDIO_ErrorStateRccPeripheralClockEnbale(u8 A_u8CopyBus , u8 A_u8CopyPeripheralEnable);
ErrorState_t MDIO_ErrorStateRccPeripheralClockDisable(u8 A_u8CopyBus , u8 A_u8CopyPeripheralEnable);
u8           MDIO_u8RccCalibrationValue(void);
ErrorState_t MDIO_ErrorStateRccClockTrim(/***/);

























#endif 
