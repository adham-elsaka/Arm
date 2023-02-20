
#include "Std_Types.h"




/////////////////////////////////////////////////////////////////////////////////////
typedef struct 
{
   uint32 enable    :1;
   uint32 INTEN     :1;
   uint32 CLK_SRC   :1;
   uint32           :13;
   uint32 COUNT     :1;
   uint32           :15;

}STCTRL_BF;

typedef union 
{
    uint32 R;
    STCTRL_BF B;

}STCTRL_Tag;



typedef struct 
{
   uint32 RELOAD    :24;
   uint32           :8;  
}STRELOAD_BF;

typedef union 
{
    uint32 R;
    STRELOAD_BF B;
}STRELOAD_Tag;


typedef struct 
{
   uint32 CURRENT    :24;
   uint32            :8;  
}STCURRENT_BF;

typedef union 
{
    uint32 R;
    STCURRENT_BF B;

}STCURRENT_Tag;
//////////////////////////////////////////////////////////////////////////////////////////

void Systick_Initialize(void);

void Systick_SetFreq(uint32 Period); 

///////////////////////////////////////////////////////////////////////////////////////////

#define STRELOAD                        (*((volatile STRELOAD_Tag*)( 0xE000E000+0x014)))
#define STCURRENT                       (*((volatile STCURRENT_Tag*)(0xE000E000+0x018)))
#define STCTRL                          (*((volatile STCTRL_Tag*)(0xE000E000+0x010)))	