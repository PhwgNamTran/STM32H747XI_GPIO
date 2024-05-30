#include "STM32H747XI_GPIO.h"

/*
Function description: Enable Clock Source of GPIO Port
Input: GPIO Port A, B, C, ...K.
Return value: N/A
*/
void GPIO_Enable_ClockSource(UINT16 GPIOx_CLKSRC)
{
    SET_BIT(RCC->AHB4ENR, GPIOx_CLKSRC);
}

/*
Function description: Disable Clock Source of GPIO Port
Input: GPIO Port A, B, C, ...K.
Return value: N/A
*/
void GPIO_Disable_ClockSource(UINT16 GPIOx_CLKSRC)
{
    CLEAR_BIT(RCC->AHB4ENR, GPIOx_CLKSRC);
}

/*
Function description: 
Input:
Return value: N/A
*/
void GPIO_PinConfig(GPIO_ST *GPIOx, UINT16 Pin, UINT8 Mode)
{
    CLEAR_BIT(GPIOx->MODER, (3 << Pin*2));
}