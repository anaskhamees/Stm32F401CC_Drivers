/********************************************************************************************************/
/************************************************Includes************************************************/
/********************************************************************************************************/

#include "Scheduler.h"

/********************************************************************************************************/
/************************************************Variables***********************************************/
/********************************************************************************************************/

extern void ToggleLed1(void);
extern void ToggleLed2(void);

const UserRunnable_t UserRunnables[_MAX_RUNNABLE]=
{
 [Runnable_1]={
    .PeriodicityMS=500,
    .FirstDelayMS=0,
    .CallBack=ToggleLed1
 }, 
 [Runnable_2]={
    .PeriodicityMS=1500,
    .FirstDelayMS=0,
    .CallBack=ToggleLed2
 } 
};