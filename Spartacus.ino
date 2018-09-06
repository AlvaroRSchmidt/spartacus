#include <SoftwareSerial.h>
#include "SpartacusUtils.h"
#include "SpartacusEngine.h"

#define rxPin 2
#define txPin 2
#define ledPin 8
#define engineFrontLeftPin1 5
#define engineFrontLeftPin2 6
#define updateTime 500

SoftwareSerial moduloBT(rxPin, txPin);
SpartacusEngine engineFrontLeft(engineFrontLeftPin1, engineFrontLeftPin2);
float previousMillis, currentMillis; 

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  moduloBT.begin(9600);
}

void loop() {
  currentMillis = millis();
  if(currentMillis - previousMillis >= updateTime){
    previousMillis = currentMillis;

    togglePin(ledPin);
  }

  if(moduloBT.available()) {
    String received = moduloBT.readString();
    Serial.println(received);
  }
}
