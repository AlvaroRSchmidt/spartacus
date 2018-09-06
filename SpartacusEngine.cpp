#include "Arduino.h"
#include "SpartacusEngine.h"

SpartacusEngine::SpartacusEngine(int pin1, int pin2)
{
  pinMode(pin1, OUTPUT);
  _pin1 = pin1;
  pinMode(pin2, OUTPUT);
  _pin2 = pin2;
}

void SpartacusEngine::forward(int power)
{
  
}

void SpartacusEngine::backward(int power)
{
  
}
