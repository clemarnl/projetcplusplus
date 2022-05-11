using namespace std;
#include "Arduino.h"


#ifndef ACTIONNEUR_H
#define ACTIONNEUR_H
class Actionneur {
protected:
    bool etat;
    int pin;
public:
    virtual void setPin(int pin);
    int returnPin();

    virtual void allume();
    virtual void eteint();
    bool getEtat();
};
#endif
