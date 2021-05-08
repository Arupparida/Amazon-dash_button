#include <Arduino.h>
#include <ESP8266WiFi.h>
#include "ThingSpeak.h"

#define SECRET_CH_ID 000000			// replace 0000000 with your channel number
#define SECRET_WRITE_APIKEY "XYZ"   // replace XYZ with your channel write API Key

bool thing_speak_begin();
int thing_speak_upload_data(int data);