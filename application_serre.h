#include "actionneur_simple.h"
#include "moteur_toit.h"
#include "capteur_humid_tempe.h"
#include "capteur_luminosite.h"

#ifndef APPLICATION_SERRE_H
#define APPLICATION_SERRE_H

class Application_serre {
private:
    SHT31 sht31;
    Actionneur_simple Ventilateur;
    Actionneur_simple Led;
    Actionneur_simple Arrosage;
    Moteur_toit Moteur;
    Capteur_humid_tempe C_humid_tempe;
    Capteur_luminosite C_luminosite;

public:
    Application_serre(SHT31 *sht31);
    void init();
    void boucle();
};
#endif
