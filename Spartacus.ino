#include <SoftwareSerial.h>
#include "SpartacusUtils.h"

#define ledPin 8
#define updateTime 500

float previousMillis, currentMillis; 

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  currentMillis = millis();
  if(currentMillis - previousMillis >= updateTime){
    previousMillis = currentMillis;

    togglePin(ledPin);
  }
}
