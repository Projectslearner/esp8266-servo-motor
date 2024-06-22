/*
    Project name : ESP8266 Servo Motor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-servo-motor
*/

#include <ESP8266WiFi.h>
#include <ESP8266Servo.h>

// Define GPIO pin connected to the servo signal pin
#define SERVO_PIN D5

Servo myServo; // Create a Servo object

void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging

  myServo.attach(SERVO_PIN); // Attach the servo to the GPIO pin

  // Move the servo to the initial position (90 degrees)
  myServo.write(90);
  Serial.println("Servo initialized to 90 degrees");
}

void loop() {
  // Sweep the servo from 0 to 180 degrees
  for (int pos = 0; pos <= 180; pos++) {
    myServo.write(pos); // Set the servo position
    delay(15); // Wait for the servo to reach the position
  }

  // Sweep the servo back from 180 to 0 degrees
  for (int pos = 180; pos >= 0; pos--) {
    myServo.write(pos); // Set the servo position
    delay(15); // Wait for the servo to reach the position
  }
}
