#include <Arduino.h>

#define Mq7_pin 4

float CO_value;

void setup() {
  Serial.begin(115200);
  delay(2000);
}

void loop() {
  CO_value = analogRead(Mq7_pin);
  Serial.println("Carbon monoxide value: ");
  Serial.println(CO_value);
  delay(1000);
}
