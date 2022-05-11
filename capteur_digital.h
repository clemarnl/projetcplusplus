using namespace std;
#include "Arduino.h"
#include "capteur.h"


#ifndef CAPTEUR_DIGITAL_H
#define CAPTEUR_DIGITAL_H
class Capteur_digital:public Capteur {
protected:
public:
    virtual int acquisition() = 0;
};
#endif
