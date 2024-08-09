/*
code started

#define servo = D4

code created by innovative ideas https://youtube.com/c/InnovativeIdeasyt
*/

#define BLYNK_TEMPLATE_ID "TMPL2iZJefQdf"
#define BLYNK_TEMPLATE_NAME "Pet feeder"
#define BLYNK_AUTH_TOKEN "AYild6EvCHSSu3HCucdj1ZBM4e3jl70j"

#include <Servo.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_PRINT Serial

// Servo object
Servo servo;

// Wi-Fi credentials
char ssid[] = "Dance4password";  // Enter your Wi-Fi name
char pass[] = "3$-&dA,)^HDooh";  // Enter your Wi-Fi password

// Blynk virtual pin handler
BLYNK_WRITE(V2) {
  servo.write(param.asInt());
}

void setup() {
  Serial.begin(9600);
  servo.attach(D4);  // Attach the servo to pin D4
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}
