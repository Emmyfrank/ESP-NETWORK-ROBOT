#include <ESP8266WiFi.h>

// Replace with your desired AP credentials
const char* ssid = "KWAANDA";
const char* password = "12345678";

void setup() {
  Serial.begin(115200);
  
  // Set ESP8266 as an access point
  WiFi.mode(WIFI_AP);
  
  // Set up the access point with the provided SSID and password
  WiFi.softAP(ssid, password);

  Serial.println();
  Serial.println("Access Point created");
  Serial.print("IP Address: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  // Nothing to do here
}