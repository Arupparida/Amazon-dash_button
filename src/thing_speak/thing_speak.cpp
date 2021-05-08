#include "thing_speak.h"

WiFiClient  client;

unsigned long myChannelNumber = SECRET_CH_ID;
const char * myWriteAPIKey = SECRET_WRITE_APIKEY;

bool thing_speak_begin()
{
    return ThingSpeak.begin(client);  // Initialize ThingSpeak
}

int thing_speak_upload_data(int data)
{
    return ThingSpeak.writeField(myChannelNumber, 1, data, myWriteAPIKey);
}