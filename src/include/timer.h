/* Header file
 * Description: General Purpose Timer function signatures and macros
 * Author: Prassanna
 */

#ifndef TIMER_H_
#define TIMER_H_

//Macros for boolean
#define ON                          1
#define HI                          1
#define OFF                         0
#define LO                          0  

// CLKmodes for operations
enum CLKmode { 
    PCLK=0, HCLK, LFOSC, HFXTAL
};

//Enumeration for timer capture events
typedef enum {
    WK_UP           = 0, 
    EXTINT0         = 1, 
    EXTINT1         = 2,
    EXTINT2         = 3,
    EXTINT4         = 5,
    EXTINT5         = 6,
    EXTINT7         = 8,
    EXTINT8         = 9,
    WD_TMR          = 10,
    LVA_DIE_INT0    = 13,
    MDIO            = 14,
    GEN_PUR_TMR1    = 15
} tmr0evnt;

typedef enum {
    EXTINT4         = 0,
    EXTINT5         = 1,
    FLASHCON        = 3,
    UART            = 4,
    SPI0            = 5,
    PLA0            = 6,
    PLA1            = 7,
    DMA_ERR         = 8,
    DMA_DONE        = 9,
    I2C1_SLV        = 13,
    I2C1_MAS        = 14,
    GEN_PUR_TMR2    = 15
} tmr1evnt;

typedef enum {
    EXTINT7         = 0,
    EXTINT8         = 1,
    SPI1            = 2,
    I2C0_SLV        = 3,
    I2C0_MAS        = 4,
    PLA2            = 5,
    PLA3            = 6,
    PWM_TRIP        = 7,
    PWM0            = 8,
    PWM1            = 9,
    PWM2            = 10,
    PWM3            = 11,
    LVA_DIE_INT1    = 12,
    EXTINT0         = 13,
    EXTINT1         = 14,
    GEN_PUR_TMR1    = 15
} tmr2evnt;



#endif