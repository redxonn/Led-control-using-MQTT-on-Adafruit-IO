/************************ Adafruit IO Config *******************************/

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME    "SunilXonn"
#define IO_KEY         "Sunil@5629"
//Wi-Fi Details
#define WIFI_SSID       "spatez"
#define WIFI_PASS       "spatez@2018"

#include "AdafruitIO_WiFi.h"
AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);
