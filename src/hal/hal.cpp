#include <Arduino.h>
#include "hal.h"

void hal_initialise_serial(int baud_rate)
{
    Serial.begin(baud_rate);
}

void hal_configure_pin(int pin, hal_pin_configurations config)
{
    pinMode(pin, config);
}

void hal_write_pin(uint8_t pin, hal_pin_states write)
{
    digitalWrite(4, write);
}