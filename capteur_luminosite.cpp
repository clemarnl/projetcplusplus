#include "capteur_luminosite.h"

int Capteur_luminosite::acquisition() {
  int value = analogRead(this->pin);
  Serial.print("Luminosité: ");
  Serial.print(value);
  Serial.println(" ");
	return value;
}
