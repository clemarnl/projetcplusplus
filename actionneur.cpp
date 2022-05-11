#include "actionneur.h"

void Actionneur::setPin(int pin){
  this->pin = pin;
}

int Actionneur::returnPin(){
  return this->pin;
}

void Actionneur::allume() {
	this->etat = true;
}

void Actionneur::eteint() {
	this->etat = false;
}

bool Actionneur::getEtat() {
	return this->etat ;
}
