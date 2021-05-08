#include <Arduino.h>

typedef enum
{
    OUT = OUTPUT,
    IN = INPUT
} hal_pin_configurations;

typedef enum
{
    SET = HIGH,
    CLEAR = LOW
} hal_pin_states;

void hal_initialise_serial(int baud_rate);
void hal_configure_pin(int pin, hal_pin_configurations config);
void hal_write_pin(uint8_t pin, hal_pin_states write);