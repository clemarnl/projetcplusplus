using namespace std;
#include <Arduino.h>
#include <Wire.h>
#include "SHT31.h"

#ifndef CAPTEUR_H
#define CAPTEUR_H
class Capteur {
protected:
  int pin;
public:
    void setPin(int pin);
    int returnPin();
};
#endif
