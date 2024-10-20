#include "led.h"

// Initialize the GPIO pins for the RGB LEDs
void led_init(void) {
    gpio_init(RED_LED_PIN);
    gpio_set_dir(RED_LED_PIN, GPIO_OUT);
    
    gpio_init(GREEN_LED_PIN);
    gpio_set_dir(GREEN_LED_PIN, GPIO_OUT);
    
    gpio_init(BLUE_LED_PIN);
    gpio_set_dir(BLUE_LED_PIN, GPIO_OUT);
    
    // Turn all LEDs off initially
    led_off(RED_LED_PIN);
    led_off(GREEN_LED_PIN);
    led_off(BLUE_LED_PIN);
}

// Turn on the LED (positive or negative logic handling)
void led_on(uint led_pin) {
    if (led_pin == BLUE_LED_PIN) {
        gpio_put(led_pin, false);  // Negative logic for Blue
    } else {
        gpio_put(led_pin, true);   // Positive logic for Red and Green
    }
}

// Turn off the LED (positive or negative logic handling)
void led_off(uint led_pin) {
    if (led_pin == BLUE_LED_PIN) {
        gpio_put(led_pin, true);   // Negative logic for Blue
    } else {
        gpio_put(led_pin, false);  // Positive logic for Red and Green
    }
}
