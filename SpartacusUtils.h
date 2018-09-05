#ifndef _SPARTACUS_UTILS_H
#define _SPARTACUS_UTILS_H

void tooglePin(int pinNumber) {
  if (digitalRead(pinNumber) == LOW) {
    digitalWrite(pinNumber, HIGH);
  } else {
    digitalWrite(pinNumber, LOW);
  }
}

#endif
