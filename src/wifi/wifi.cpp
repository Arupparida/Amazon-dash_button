#include "wifi.h"

char ssid[] = SECRET_SSID;   // your network SSID (name) 
char pass[] = SECRET_PASS;   // your network password

bool wifi_set_mode_to_station()
{
    return WiFi.mode(WIFI_STA);
}

void wifi_connect()
{
    if(WiFi.status() != WL_CONNECTED)
    {
        Serial.print("Attempting to connect to SSID: ");
        Serial.println(SECRET_SSID);
        while(WiFi.status() != WL_CONNECTED)
        {
            WiFi.begin(ssid, pass);  // Connect to WPA/WPA2 network. Change this line if using open or WEP network
            Serial.print(".");
            delay(5000);     
        } 
        
        Serial.println("\nConnected.");
    }
}