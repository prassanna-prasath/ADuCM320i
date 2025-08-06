#include "headers/pincm320i.h"
#include "nn.h"
#include "main.h"
#include "include/uart.h"

void initClk_UART(void) {
    resetClk();
}

void init_MCU(void) {
    initClk_UART();
    initUART();

}

int main(void) {
    //Initialize MCU
    init_MCU();

    double * datastream;

    //receive UART data

    //Decode 32 Bytes of data received via UART_Rx

    //Test the 
    neuralNetwork(datastream);

    return 0;
}