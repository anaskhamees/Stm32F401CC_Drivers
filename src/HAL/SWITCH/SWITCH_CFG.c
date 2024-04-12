/********************************************************************************************************/
/************************************************Includes************************************************/
/********************************************************************************************************/
#include "MCAL/GPIO/GPIO.h"
#include "switch.h"

/********************************************************************************************************/
/************************************************Defines*************************************************/
/********************************************************************************************************/



/********************************************************************************************************/
/************************************************Types***************************************************/
/********************************************************************************************************/

SwitchCFG_t Switches[_SWITCHES_NUM]=
{
    [SWITCH_1]=
    {
        .SW_Port=GPIO_PORTC,
        .SW_Pin=GPIO_PIN13,
        .SW_Connection=GPIO_IN_PD,
    }
};