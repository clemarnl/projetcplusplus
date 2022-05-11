#include "capteur.h"

#ifndef CAPTEUR_HUMID_TEMPE_H
#define CAPTEUR_HUMID_TEMPE_H
class Capteur_humid_tempe:public Capteur {
private:
public:
	float acquisition(char i, SHT31 *sht31);
};
#endif
