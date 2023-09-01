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
        
        float time = input;
        output = 1;
        while (time > 0){
            wait_ms(100);
            time = time - 0.1;
            
        }
        output = 0;
        //float x = input;
        
        /*printf("Blink! LED is on for %f seconds\n", input.read()*2);
        wait_ms(input*2);
        output=0;
        printf("LED is off\n");
        */
        wait_ms(2000-2*input);
    }
}
