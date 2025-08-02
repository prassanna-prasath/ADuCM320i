#include "../headers/pincm320i.h"
#include "watchdog.h"

//Macros to enable/disable to enable WD timers

#define ENABLE_WD_TMR(X)                (T3CONbits.ENABLE = ON)
#define DISABLE_WD_TMR(X)               (T3CONbits.ENABLE = OFF)

//Macro to set general purpose timer mode
#define SET_FREE_WD_TMR_MODE            (T3CONbits.MOD = LO)
#define SET_PERIODIC_WD_TMR_MODE        (T3CONbits.MOD = HI)
#define WD_TMR_INT_ENABLE               (T3CONbits.IRQ = ON)
#define WD_TMR_INT_DISABLE              (T3CONbits.IRQ = OFF)
#define WD_TMR_SUSPND_ON_HBRNATE        (T3CONbits.PMD = ON)
#define WD_TMR_DIS_SUSPND_ON_HBRNATE    (T3CONbits.PMD = OFF)

//Macros for prescaling
#define DIV_WD_PRE_SCALER_1     (T3CONbits.PRE = 0)
#define DIV_WD_PRE_SCALER_16    (T3CONbits.PRE = 1)
#define DIV_WD_PRE_SCALER_256   (T3CONbits.PRE = 2)
#define DIV_WD_PRE_SCALER_4096  (T3CONbits.PRE = 3)