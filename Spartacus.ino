#include <SoftwareSerial.h>
#include "SpartacusUtils.h"

#define ledPin 8
#define updateTime 1000

float previousMillis, currentMillis; 

void setup() {
  pinMode(ledPin, OUTPUT);
}


void loop() {
  currentMillis = millis();
  if(currentMillis - previousMillis >= updateTime){
    previousMillis = currentMillis;
    
    tooglePin(ledPin);
    delay(500);
    tooglePin(ledPin);
  }
}
