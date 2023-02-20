#include "Std_Types.h"
#include "GPIO.h"
#include "Timer.h"
#include "Interrupt.h"


#define CORTEXM4_PERI_BASE_ADDRESS             0xE000E000
#define APINT                                  *((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS+0xD0C))


#define high                                     1
#define low                                      0


#define SYSCTRL                               0x400FE000

#define RCGCGPIO_add                          (*((volatile uint32*)(SYSCTRL+ 0x604))

#define RCGCGPIO_            (*((volatile RCGCGPIO_Tag*)(0x400FE000+ 0x608)))

