#include "../headers/pincm320i.h"
#include "uart.h"

#define RESET_COMIEN()          (*(volatile unsigned int *)COMIEN = 0x0000)
#define RESET_COMIIR()          (*(volatile unsigned int *)COMIIR = 0x0001)
#define RESET_COMLCR()          (*(volatile unsigned int *)COMLCR = 0x0000)
#define RESET_COMMCR()          (*(volatile unsigned int *)COMMCR = 0x0000)
#define RESET_COMLSR()          (*(volatile unsigned int *)COMLSR = 0x0060)
#define RESET_COMMSR()          (*(volatile unsigned int *)COMMSR = 0x0000)
#define RESET_COMSCR()          (*(volatile unsigned int *)COMMSR = 0x0000)
#define RESET_COMFBR()          (*(volatile unsigned int *)COMFBR = 0x0000)
#define RESET_COMDIV()          (*(volatile unsigned int *)COMDIV = 0x0001)
#define INIT_UART_SIN()         (GP1CONbits.CON0 = 0x01)
#define INIT_UART_SOUT()        (GP1CONbits.CON1 = 0x01)

void resetUART(void) {
    COMTXbits.THR = 0x0;
    COMRXbits.RBR = 0x0;
    RESET_COMIEN();
    RESET_COMIIR();
    RESET_COMLCR();
    RESET_COMMCR();
    RESET_COMLSR();
    RESET_COMMSR();
    RESET_COMFBR();
    RESET_COMDIV();
    
}

void initUART(void) {
    resetUART();
    INIT_UART_SIN();

}