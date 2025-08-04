#include "../headers/pincm320i.h"
#include "uart.h"

#define INIT_UART_SIN()         (GP1CONbits.CON0 = 0x01)
#define INIT_UART_SOUT()        (GP1CONbits.CON1 = 0x01)

void initUART(void) {
    INIT_UART_SIN();
    
}