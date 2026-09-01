#include <ESP32Servo.h>

Servo servo;

void setup() {
  servo.attach(14, 500, 2400); // Ensure wire is on GPIO 14
  Serial.begin(9600);
}

void loop() {
  Serial.println("Moving to 30 degrees:-");
  servo.write(30);
  delay(1000); // Wait 1 second so it reaches the position

  Serial.println("Moving to 150 degrees:-");
  servo.write(150);
  delay(1000); // Wait 1 second
}