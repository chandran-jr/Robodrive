#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "";
char ssid[] = "";
char pass[] = "";

void setup()
{ Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{ Blynk.run();}
