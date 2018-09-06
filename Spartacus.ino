#include <SoftwareSerial.h>
#include <ArduinoJson.h>
#include "SpartacusUtils.h"

#define rxPin 2
#define txPin 2
#define ledPin 8
#define updateTime 500

SoftwareSerial moduloBT(rxPin, txPin);
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
