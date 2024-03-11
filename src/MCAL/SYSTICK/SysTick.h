#ifndef MCAL_SYSTICK_SYSTICK_H_
#define MCAL_SYSTICK_SYSTICK_H_
/********************************************************************************************************/
/************************************************Includes************************************************/
/********************************************************************************************************/
#include "Std_Lib/Std_Libraries.h"

/********************************************************************************************************/
/************************************************Defines*************************************************/
/********************************************************************************************************/
#define SYSTICK_BASE_ADDRESS            (0xE000E010UL)
#define SYSTICK_ENABLE_INT_AHB_8        (0x00000003UL) /* Enable: ON, INT: ON, CLK: AHB/8 */
#define SYSTICK_ENABLE_INT_AHB          (0x00000007UL) /* Enable: ON, INT: ON, CLK: AHB   */
#define SYSTICK_DISABLE                 (0x00000000UL)
#define SYSTICK_MODE_PERIODIC           (0UL)
#define SYSTICK_MODE_ONE_TIME           (1UL)
#define SYSTICK_AHB_CLK_SOURCE          (16000000UL)

/********************************************************************************************************/
/************************************************Types***************************************************/
/********************************************************************************************************/
typedef struct 
{
    uint32_t STK_CTRL ;
    uint32_t STK_LOAD ;
    uint32_t STK_VAL  ;
    uint32_t STK_CALIB;
}SysTick_Registers_t;



/********************************************************************************************************/
/************************************************APIs****************************************************/
/********************************************************************************************************/

ErrorStatus_t SYSTICK_Start(uint32_t CFG,uint32_t Mode);
void SYSTICK_Stop(void);
ErrorStatus_t SYSTICK_SetTimeMs(uint32_t TimeMS);
ErrorStatus_t SYSTICK_IsExpired(uint8_t* ExpiredFlag);


#endif // MCAL_SYSTICK_SYSTICK_H_