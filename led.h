#ifndef LED_H
#define LED_H

#include "pico/stdlib.h"

// Pin definitions for LEDs
#define RED_LED_PIN 25
#define GREEN_LED_PIN 15
#define BLUE_LED_PIN 16

// Function declarations

void led_init(void);
void led_on(uint led_pin);
void led_off(uint led_pin);

#endif
