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

void initUART(unsigned char dataBitsLen) {

    resetUART();                            //Reset the UART before initializing
    INIT_UART_SIN();                        //Initialize the UART Serial IN in GPIO

    COMLCRbits.WLS = 0x8;   // 8 data bits
    COMLCRbits.STOP = 0x0;                  // 1 stop bit

    COMFBRbits.DIVM = 0x1;
    COMFBRbits.DIVN = 0x3;
    COMDIVbits.DIV = 0x41;

}