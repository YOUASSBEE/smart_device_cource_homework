#include <Arduino.h>

#define pot 26
#define led1 7
#define led2 8
#define led3 9

int16_t adcValue;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  
  Serial.begin(115200);
}

void loop() {
  adcValue = analogRead(pot);
  Serial.println(adcValue);

  if ((adcValue >= 0) && (adcValue <= 338)) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  else if ((adcValue >= 339) && (adcValue <= 676)) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
  }
}
