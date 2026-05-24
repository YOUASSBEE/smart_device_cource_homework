#include <Arduino.h>
#include "RotaryEncoder.h"

#define encPin1 21
#define encPin2 22
#define button 8
#define led 12

RotaryEncoder encoder(encPin1, encPin2, RotaryEncoder::LatchMode::FOUR3);

static int pos = 0;
int newPos;

static int buttonState = 1;
int newButtonState;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
  
  Serial.begin(115200);
  Serial.println(pos);
}

void loop() {
  encoder.tick();
  newPos = encoder.getPosition();

  if(pos != newPos){
    Serial.print(" pos:");
    Serial.print(newPos);
    Serial.print(" dir:");
    Serial.print((int)(encoder.getDirection()));
    Serial.print("\n");

    pos = newPos;
  }
  
  newButtonState = digitalRead(button);
  if (buttonState != newButtonState) {
    buttonState = newButtonState;
    if (buttonState == LOW) {
      digitalWrite(led, HIGH);
      Serial.println("Кнопка нажата!");
    } else {
      digitalWrite(led, LOW);
      Serial.println("Кнопка отпущена!");
    }
  }
  
}
