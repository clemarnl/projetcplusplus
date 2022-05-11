#include "moteur_toit.h"

int pos;
Servo servomoteur;

void Moteur_toit::ouvre() {
	if (!this->etat) {
		for (pos = 90; pos <= 180; pos += 1) {
			servomoteur.write(pos);
		}
	}
	Actionneur::allume();
}

void Moteur_toit::ferme() {
	if (this->etat) {
		for (pos = 180; pos >= 90; pos -= 1) {
			servomoteur.write(pos);
		}
	}
	Actionneur::eteint();
}

void Moteur_toit::setPin(int pin){
  Actionneur::setPin(pin);
  servomoteur.attach(pin);
  this->etat = true;
}
