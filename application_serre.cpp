#include "application_serre.h"

//CONSTRUCTEUR
Application_serre::Application_serre(SHT31 *sht31){
  this->sht31 = *sht31;
}

//INITIALISATION
void Application_serre::init() {
	//initialisation de tous les actionneurs : on donne la pin sur laquelle ils sont branch�s
	pinMode(3, OUTPUT);
	this->Ventilateur.setPin(3);
	this->Led.setPin(4);
	this->Arrosage.setPin(8);
	this->Moteur.setPin(5);

	//initialisation de tous les capteurs : on donne la pin sur laquelle ils sont branch�s
	//this->C_humid_tempe.setPin(A0); --> pas la peine car est sur le bus I2C
	this->C_luminosite.setPin(A0);

   sht31.begin(); 
   Moteur.ferme();
   Ventilateur.eteint();
}


//FONCTION BOUCLE
void Application_serre::boucle() {
  //partie humidité et température
  float temp = C_humid_tempe.acquisition('T', &sht31);
  float hum =  C_humid_tempe.acquisition('H', &sht31);
  // vérification des paramètres mesurés sur le moniteur
     Serial.print("Temp: ");
     Serial.print(temp);
     Serial.print("Hum: ");
     Serial.print(hum);
     Serial.println(" ");
  
  //le fonctionnement du système prenant en compte les paramètres d'humidité et de
  //température est expliqué dans le rapport
  if (hum < 40.0){
    if (temp > 28){
      Moteur.ouvre();
      Ventilateur.allume();    
    }else {
      Moteur.ferme();
      Ventilateur.eteint();
    }
    Arrosage.allume();
  }else if(hum > 75.0){
    Arrosage.eteint();
    Moteur.ouvre();
    Ventilateur.allume();
  }else{
    if (temp > 28) {
      Arrosage.eteint();
      Moteur.ouvre();
      Ventilateur.allume();
    }else{
      Arrosage.eteint();
      Ventilateur.allume();
      Moteur.ferme();
      Serial.println("test");
      Ventilateur.eteint();
    }
  }

  //partie lumière : si la luminosité est en-dessous d'un certain seuil, alors on allume les leds
  int value = C_luminosite.acquisition();
  if ((value < 700) && (value>50)){
    Led.allume();
  }else{
    Led.eteint();
  }

  
  delay(1000);
}
