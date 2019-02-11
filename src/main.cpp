#include <Arduino.h>

int timedelay = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  if(Serial.available() > 0) {
    auto s = Serial.readStringUntil('\n');
    timedelay = (int)s.toInt();
  }

  int value = analogRead(A0);
  Serial.println(value);
  delay(timedelay);
}