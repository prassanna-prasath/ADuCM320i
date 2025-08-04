#include "headers/pincm320i.h"
#include "nn.h"
#include "init.h"
#include "include/uart.h"

void init_MCU(void) {
    initUART(8);    // length of databits as parameter

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