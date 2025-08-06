#include "../headers/pincm320i.h"
#include "clock.h"

#define RESET_CLKCON0()             (*(volatile unsigned int *)CLKCON0 = 0x0041)
#define RESET_CLKCON1()             (*(volatile unsigned int *)CLKCON1 = 0x0200)
#define RESET_CLKCON5()             (*(volatile unsigned int *)CLKCON5 = 0x0040)


void resetClk(void) {
    RESET_CLKCON0();
    RESET_CLKCON1();
    RESET_CLKCON5();
}