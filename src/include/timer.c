/* Source file
 * Description: General Purpose Timer operation definitions
 * Author: Prassanna
 */

#include "../headers/pincm320i.h"
#include "timer.h"

//Macros to enable/disable to enable GP timers
#define ENABLE_TMR(X)                   (T##X##CONbits.ENABLE = ON)
#define DISABLE_TMR(X)                  (T##X##CONbits.ENABLE = OFF)

//Macro to set general purpose timer mode
#define SET_FREE_TMR_MODE(X)            (T##X##CONbits.MOD = LO)
#define SET_PERIODIC_TMR_MODE(X)        (T##X##CONbits.MOD = HI)
#define SET_TMR_UP(X)                   (T##X##CONbits.UP = HI)
#define SET_TMR_DOWN(X)                 (T##X##CONbits.UP = LO)
#define ENABLE_TMR_EVENT_CAPTURE(X)     (T##X##CONbits.EVENTEN = ON)
#define DISABLE_TMR_EVENT_CAPTURE(X)    (T##X##CONbits.EVENTEN = OFF)        

//Macro to set Prescalers
#define DIV_PRE_SCALER_1(X)             (T##X##CONbits.PRE = 0)
#define DIV_PRE_SCALER_4(X)             (T##X##CONbits.PRE = 0)
#define DIV_PRE_SCALER_16(X)            (T##X##CONbits.PRE = 1)
#define DIV_PRE_SCALER_256(X)           (T##X##CONbits.PRE = 2)
#define DIV_PRE_SCALER_MAX(X)           (T##X##CONbits.PRE = 3)

//Macro to clear interrupts
#define CLR_CAPTURE_EVENT_INT(X)        (T##X##CLRIbits.CAP = 1)
#define CLR_TIMEOUT_INT(X)              (T##X##CLRIbits.TMOUT = 1)
