#include "capteur_humid_tempe.h"

float Capteur_humid_tempe::acquisition(char i, SHT31 *sht31) {
  if (i == 'T') {
    return sht31->getTemperature();
  }else if (i == 'H'){
	  return sht31->getHumidity();
  }
}
