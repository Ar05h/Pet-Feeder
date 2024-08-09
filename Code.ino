#define BLYNK_TEMPLATE_ID "Your_ID"  // Replace with your Blynk Template ID
#define BLYNK_TEMPLATE_NAME "Pet feeder"  // The name of your Blynk project
#define BLYNK_AUTH_TOKEN "Your_Token"  // Replace with your Blynk Auth Token

#include <Servo.h>  // Include the Servo library to control the servo motor
#include <ESP8266WiFi.h>. // Include the ESP8266 Wi-Fi library
#include <BlynkSimpleEsp8266.h>  // Include the Blynk library for ESP8266

#define BLYNK_PRINT Serial  // Enable Blynk debug prints to the Serial Monitor

Servo servo;  // Create a Servo object to control the servo motor

char ssid[] = "Your_SSID";  // Replace with your Wi-Fi network name (SSID)
char pass[] = "Your_Password";  // Replace with your Wi-Fi password

// This function is triggered when the value on virtual pin V2 changes
BLYNK_WRITE(V2) {
  servo.write(param.asInt());  // Move the servo to the angle received from the Blynk app
}

void setup() {
  Serial.begin(9600);  // Start the Serial communication at a baud rate of 9600
  servo.attach(D4);  // Attach the servo motor to pin D4 on the ESP8266
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);  // Connect to Blynk using the Auth Token and Wi-Fi credentials
}

void loop() {
  Blynk.run();  // Keep the Blynk connection active
}
