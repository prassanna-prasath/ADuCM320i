#include "headers/pincm320i.h"
#include "nn.h"
#include "init.h"


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