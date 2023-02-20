#include "Std_Types.h"
#include "GPIO.h"


void GPIO_Init( int D , int PIN)
{
   

	    switch (PIN) {

        case 0:
				    GPIODENF.B.PIN0=1;
            break;
				
        case 1:
				    GPIODENF.B.PIN1=1;
            break;
				
        case 2:
				    GPIODENF.B.PIN2=1;
            break;
				
        case 3:
				    GPIODENF.B.PIN3=1;
            break;
				
        case 4:
				    GPIODENF.B.PIN4=1;
            break;
				
        case 5:
				    GPIODENF.B.PIN5=1;
            break;
				
        case 6:
				    GPIODENF.B.PIN6=1;
            break;
				
        case 7:
				    GPIODENF.B.PIN7=1;
            break;
				
       
			}

	
	
	
	
	if(D == 0){
	   
		
		
		
		
			    switch (PIN) {

        case 0:
            GPIODIR_F.B.DIR0=0;
            break;
				
        case 1:
            GPIODIR_F.B.DIR1=0;
            break;
				
        case 2:
            GPIODIR_F.B.DIR2=0;
            break;
				
        case 3:
            GPIODIR_F.B.DIR3=0;
            break;
				
        case 4:
            GPIODIR_F.B.DIR4=0;
            break;
				
        case 5:
            GPIODIR_F.B.DIR5=0;
            break;
				
        case 6:
            GPIODIR_F.B.DIR6=0;
            break;
				
        case 7:
            GPIODIR_F.B.DIR7=0;
            break;
			}
		

		
	  }
	else if(D == 1){
		
		
		 switch (PIN) {

        case 0:
            GPIODIR_F.B.DIR0=1;
            break;
				
        case 1:
            GPIODIR_F.B.DIR1=1;
            break;
				
        case 2:
            GPIODIR_F.B.DIR2=1;
            break;
				
        case 3:
            GPIODIR_F.B.DIR3=1;
            break;
				
        case 4:
            GPIODIR_F.B.DIR4=1;
            break;
				
        case 5:
            GPIODIR_F.B.DIR5=1;
            break;
				
        case 6:
            GPIODIR_F.B.DIR6=1;
            break;
				
        case 7:
            GPIODIR_F.B.DIR7=1;
            break;
			}
		
		

		}
	
	

}


uint32 GPIORead(int PIN){

		switch(PIN){
			
			
			case 0 :
            return GPIODATA_F.B.DATA0;
			      break;
           
			case 1 :
            return GPIODATA_F.B.DATA1;
			      break;
			
			case 2 :
            return GPIODATA_F.B.DATA2;
			      break;
			
			case 3 :
            return GPIODATA_F.B.DATA3;
			      break;
			
			case 4 :
            return GPIODATA_F.B.DATA4;
			      break;
			
			case 5 :
            return GPIODATA_F.B.DATA5;
			      break;
			
			case 6 :
            return GPIODATA_F.B.DATA6;
       			break;
			
			case 7 :
            return GPIODATA_F.B.DATA7;
			      break;
		
		}

}



void GPIOSet(int PIN , uint32 value){

			    switch (PIN) {

        case 0:
            GPIODATA_F.B.DATA0=value;
            break;
				
        case 1:
            GPIODATA_F.B.DATA1=value;
            break;
				
        case 2:
            GPIODATA_F.B.DATA2=value;
            break;
				
        case 3:
            GPIODATA_F.B.DATA3=value;
            break;
				
        case 4:
            GPIODATA_F.B.DATA4=value;
            break;
				
        case 5:
            GPIODATA_F.B.DATA5=value;
            break;
				
        case 6:
            GPIODATA_F.B.DATA6=value;
            break;
				
        case 7:
            GPIODATA_F.B.DATA7=value;
            break;
			}


}

