#include <ESP8266WiFi.h>
#include <Arduino.h>

#define SECRET_SSID "MySSID"		// replace MySSID with your WiFi network name
#define SECRET_PASS "MyPassword"	// replace MyPassword with your WiFi password

bool wifi_set_mode_to_station();
void wifi_connect();