//Blinky
//Excercise 1
#include "mbed.h"

DigitalIn input(BUTTON1);
DigitalOut output(LED1);

int main() {
    while (1) {

        
        int x = input;
        output = x;
        printf("Blink! button is now %d, LED is now %d\n", input.read(), output.read());


        wait_ms(500);
    }
}


//Excercise 2
AnalogIn input(p15);
DigitalOut output(LED1);
int main() {
    while (1) {
        
        //float x = input;
        output = 1;
        printf("Blink! LED is on for %f seconds\n", input.read());
        wait_ms(input);
        output=0;
        printf("LED is off\n");
        wait_ms(2000);
    }
}
