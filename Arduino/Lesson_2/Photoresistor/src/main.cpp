#include <Arduino.h>

#define PHOTORESISTOR 26
#define SAMPLES 100

int16_t readAveraged(int pin, int samples) {
  int32_t sum = 0;
  for (int i = 0; i < samples; i++) {
    sum += analogRead(pin);
    delayMicroseconds(100);
  }
  return sum / samples;
}

void setup() {
  pinMode(PHOTORESISTOR, INPUT);
  Serial.begin(115200);
}

void loop() {
  int16_t value = readAveraged(PHOTORESISTOR, SAMPLES);
  float scaled = value * 10.0 / 1023.0;

  Serial.print("Измеренное: ");
  Serial.print(value);
  Serial.print(" | Масштабированное: ");
  Serial.println(scaled, 1);

  delay(100);
}
