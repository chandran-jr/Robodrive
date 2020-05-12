#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "*your authentication code should be inserted here";
char ssid[] = "your wifi name should be put here";
char pass[] = "your wifi password should be put here";

void setup()
{ Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{ Blynk.run();}
