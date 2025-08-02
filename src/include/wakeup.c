#include "../headers/pincm320i.h"
#include "wakeup.h"

//Macros to enable timer
#define ENABLE_WKUP_TMR                 (T4CONbits.ENABLE = ON)
#define DISABLE_WKUP_TMR                (T4CONbits.ENABLE = OFF)

//Macros to control timer modes
#define WKUP_TMR_FREERUN_MODE           (T4CONbits.MOD = HI)
#define WKUP_TMR_PERIODIC_MODE          (T4CONbits.MOD = LO)
#define FREEZE_WKUP_TMR                 (T4CONbits.FREEZE = HI)
#define UNFREEZE_WKUP_TMR               (T4CONbits.FREEZE = LO)

//Macros for prescaling
#define DIV_WKUP_PRE_SCALER_1           (T4CONbits.PRE = 0)
#define DIV_WKUP_PRE_SCALER_16          (T4CONbits.PRE = 1)
#define DIV_WKUP_PRE_SCALER_256         (T4CONbits.PRE = 2)
#define DIV_WKUP_PRE_SCALER_MAX         (T4CONbits.PRE = 3)

//Macros for Wake up timer interrupts
#define ENABLE_ROLLOVER_WKUP_INT        (T4IENbits.ROLL = HI)
#define CLEAR_ROLLOVER_WKUP_INT         (T4IENbits.ROLL = LO)
#define ENABLE_FIELD_A_WKUP_INT         (T4IENbits.WUFA = HI)
#define CLEAR_FIELD_A_WKUP_INT          (T4IENbits.WUFA = LO)
#define ENABLE_FIELD_B_WKUP_INT         (T4IENbits.WUFB = HI)
#define CLEAR_FIELD_B_WKUP_INT          (T4IENbits.WUFB = LO)
#define ENABLE_FIELD_C_WKUP_INT         (T4IENbits.WUFC = HI)
#define CLEAR_FIELD_C_WKUP_INT          (T4IENbits.WUFC = LO)
#define ENABLE_FIELD_D_WKUP_INT         (T4IENbits.WUFD = HI)
#define CLEAR_FIELD_D_WKUP_INT          (T4IENbits.WUFD = LO)

//Macros to clear Wake up timer interrupt flags
#define CLEAR_WKUP_A_INT_FLAG           (T4CLRIbits.WUFA = HI)
#define CLEAR_WKUP_B_INT_FLAG           (T4CLRIbits.WUFB = HI)
#define CLEAR_WKUP_C_INT_FLAG           (T4CLRIbits.WUFC = HI)
#define CLEAR_WKUP_D_INT_FLAG           (T4CLRIbits.WUFD = HI)
#define CLEAR_WKUP_ROLLOVER_INT_FLAG    (T4CLRIbits.ROLL = HI)

