#include "IntCrtl.h"
#include "Mcu_Hw.h"

volatile uint32 CurrentState =0;
volatile uint32 OFFPeriod =1;  /* Half second as an initial off period */
volatile uint32 ONPeriod =1;   /* Half second as an initial on period */


void ISR(void)
{
   if(CurrentState==1){
	   GPIOSet(0,low);
		 Systick_SetFreq(15999999*OFFPeriod);  /* Period in seconds */
		 CurrentState=0;
	 }else if(CurrentState==0){
	   GPIOSet(0,high);
	   Systick_SetFreq(15999999*ONPeriod);  /* Period in seconds */
	   CurrentState=1;
	 }
	
	
	//GPIODATA_F.B.DATA0 ^=1; 
	
}


int main(void){

	uint32 Switch1=0; 
	uint32 Switch2=0; 
	uint32 previous_value1=0; 
	uint32 previous_value2= 0;
	
	
	
	GPIO_Init(0,2);
	GPIO_Init(0,1);
	
	GPIO_Init(1,0);
	Systick_Initialize();
	CallBackISR(ISR);
	
	//DigitalWrite(portF,HIGH);
while(1){

	Switch1=GPIORead(1);
	Switch2=GPIORead(2);
  
  if(Switch1==1 && previous_value1 ==0){
	 
  		OFFPeriod=OFFPeriod+1;
		  if(ONPeriod > 1){
				
			ONPeriod=ONPeriod-1;
				
			}
	}

  if(Switch2==1 && previous_value2 ==0){
	 
  		ONPeriod=ONPeriod+1;
		  if(OFFPeriod > 1){
				
			OFFPeriod=OFFPeriod-1;
				
			}
	}	
	
previous_value1=	Switch1;
previous_value2=	Switch2;	
	

}
return 0;


	
}





