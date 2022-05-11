#include "actionneur.h"
#include <Servo.h>

#ifndef MOTEUR_TOIT_H
#define MOTEUR_TOIT_H
class Moteur_toit :public Actionneur {
public:
   void ouvre();
   void ferme();
   virtual void setPin(int pin);
  
};
#endif
