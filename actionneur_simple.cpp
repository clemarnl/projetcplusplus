#include "actionneur_simple.h"

void Actionneur_simple::allume(){
	Actionneur::allume();
	digitalWrite(this->pin, HIGH);
}

void Actionneur_simple::eteint(){
	Actionneur::eteint();
	digitalWrite(this->pin, LOW);
}
