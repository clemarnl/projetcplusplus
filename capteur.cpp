#include "capteur.h"

void Capteur::setPin(int pin){
  this->pin = pin;
}


int Capteur::returnPin(){
  return this->pin;
}
