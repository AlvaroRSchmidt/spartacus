#ifndef _SPARTACUS_ENGINE_H
#define _SPARTACUS_ENGINE_H

#include "Arduino.h"

class SpartacusEngine
{
  public:
    SpartacusEngine(int pin1, int pin2);
    void forward(int power);
    void backward(int power);
  private:
    int _pin1;
    int _pin2;
};

#endif
