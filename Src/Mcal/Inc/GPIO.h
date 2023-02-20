#include "Std_Types.h"




typedef struct 
{
   uint32 PIN0 :1;
   uint32 PIN1 :1;
   uint32 PIN2 :1;
   uint32 PIN3 :1;
   uint32 PIN4 :1;
   uint32 PIN5 :1;
   uint32 PIN6 :1;
   uint32 PIN7 :1;
   uint32        :24;

}GPIODEN;

typedef union 
{   uint32 R;
    GPIODEN B;
}GPIODEN_Tag;


typedef struct 
{
   uint32 DATA0 :1;
   uint32 DATA1 :1;
   uint32 DATA2 :1;
   uint32 DATA3 :1;
   uint32 DATA4 :1;
   uint32 DATA5 :1;
   uint32 DATA6 :1;
   uint32 DATA7 :1;
   uint32       :24;

}GPIODATAF;

typedef union 
{
    uint32 R;
    GPIODATAF B;

}GPIODATA_Tag;


typedef struct 
{
   uint32 DIR0 :1;
   uint32 DIR1 :1;
   uint32 DIR2 :1;
   uint32 DIR3 :1;
   uint32 DIR4 :1;
   uint32 DIR5 :1;
   uint32 DIR6 :1;
   uint32 DIR7 :1;
   uint32      :24;

}GPIODIRF;

typedef union 
{
    uint32 R;
    GPIODIRF B;

}GPIODIR_Tag;


typedef struct 
{
   uint32 R0   :1;
   uint32 R1   :1;
   uint32 R2   :1;
   uint32 R3   :1;
   uint32 R4   :1;
   uint32 R5   :1;
   uint32      :26;

}RCGCGPIO_;

typedef union 
{
    uint32 R;
    RCGCGPIO_ B;

}RCGCGPIO_Tag;

///////////////////////////////////////////////////////////////////////////////////////////////////////////

void GPIO_Init( int D , int PIN );

///////////////////////////////////////////
uint32 GPIORead(int PIN);

///////////////////////////////////////////
void GPIOSet(int PIN  , uint32 value);
//////////////////////////////////////////


#define PORTF                                 (    0x40025000   )
#define GPIODATA_F                            (   *((volatile GPIODATA_Tag*)(PORTF+0x3FC))     )
#define GPIODIR_F                             (   *((volatile GPIODIR_Tag*)(PORTF+0x400))      )
#define GPIODENF                              (   *((volatile GPIODEN_Tag*)(0x40025000+ 0x51C))) 
#define RCGCGPIO                              (   *((volatile RCGCGPIO_Tag*)(0x400FE000+ 0x608)))
	
