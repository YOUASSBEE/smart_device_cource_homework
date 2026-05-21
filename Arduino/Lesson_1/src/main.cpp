#include <Arduino.h>
#include "RotaryEncoder.h"

#define encPin1 2
#define encPin2 3
#define button 4
#define led 5

RotaryEncoder encoder(encPin1, encPin2, RotaryEncoder::LatchMode::TWO03);
static int pos = 0;
int newPos;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
  
  Serial.begin(9600);
  Serial.println(pos);
}

void loop() {
  encoder.tick();
  newPos = encoder.getPosition();

  if(pos != newPos){
    Serial.print("pos:");
    Serial.print(newPos);
    Serial.print(" dir:");
    Serial.print((int)(encoder.getDirection()));
    pos = newPos;
  }

  if(! digitalRead(button) == HIGH){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}
