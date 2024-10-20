#include <stdio.h>
#include "pico/stdlib.h"
#include "led.h"

int main() {
    // Initialize stdio and LEDs
    stdio_init_all();
    led_init();
    
    // Initial delay of 5 seconds with all LEDs off
    sleep_ms(5000);
    
    while (true) {
        // First sequence: Red LED on for 1 second, then off
        led_on(RED_LED_PIN);
        sleep_ms(1000);
        led_off(RED_LED_PIN);
        sleep_ms(500);  // Small delay between LED changes
        
        // Green LED on for 1 second, then off
        led_on(GREEN_LED_PIN);
        sleep_ms(1000);
        led_off(GREEN_LED_PIN);
        sleep_ms(500);
        
        // Blue LED on for 1 second, then off
        led_on(BLUE_LED_PIN);
        sleep_ms(1000);
        led_off(BLUE_LED_PIN);
        sleep_ms(500);
        
        // Turn all LEDs on for 2 seconds
        led_on(RED_LED_PIN);
        led_on(GREEN_LED_PIN);
        led_on(BLUE_LED_PIN);
        sleep_ms(2000);
        
        // Turn all LEDs off
        led_off(RED_LED_PIN);
        led_off(GREEN_LED_PIN);
        led_off(BLUE_LED_PIN);
        
        // Loop repeats after a small delay
        sleep_ms(500);
    }
}
