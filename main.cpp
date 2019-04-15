#include "mbed.h"

// Initialize a pins to perform analog input and digital output fucntions
AnalogIn   ain(A0);

int main(void)
{
    while (1) {
        // test the voltage on the initialized analog pin
        //  and if greater than 0.3 * VCC set the digital pin
        //  to a logic 1 otherwise a logic 0
        
        // print the percentage and 16 bit normalized values
        printf("Value: %0.9f\n\r", ain.read());
        wait(0.2f);
    }
}
