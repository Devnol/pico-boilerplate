#include "pico/stdlib.h"

int main() {
    //set LED_PIN to 25, the pin where the onboard LED on the Pico is attached.
    const uint LED_PIN = 25; 
    gpio_init(LED_PIN);
    // set LED_PIN to output
    gpio_set_dir(LED_PIN, GPIO_OUT);
    
    while (true) {
        gpio_put(LED_PIN, 1); //set LED_PIN to high
        sleep_ms(250); //wait .25 seconds
        gpio_put(LED_PIN, 0); //set LED_PIN to low
        sleep_ms(250);
    }
}