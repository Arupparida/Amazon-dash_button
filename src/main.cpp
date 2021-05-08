#include <Arduino.h>
#include "hal/hal.h"
#include "wifi/wifi.h"
#include "thing_speak/thing_speak.h"

int number = 0;

void setup()
{
    // put your setup code here, to run once:
    // Initialise serial
    // Set mosfet pin as output
    hal_initialise_serial(115200);
    hal_configure_pin(4, OUT);
    hal_write_pin(4, SET);

    wifi_set_mode_to_station();
    thing_speak_begin();
}

void loop() 
{
    wifi_connect();

    int x = thing_speak_upload_data(number);
    if(x == 200)
    {
        Serial.println("Channel update successful.");
    }
    else
    {
        Serial.println("Problem updating channel. HTTP error code " + String(x));
    }

    // change the value
    number++;
    if(number > 99)
    {
        number = 0;
    }
    
    delay(20000); // Wait 20 seconds to update the channel again
}