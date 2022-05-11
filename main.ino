#include "application_serre.h"

SHT31 sht31 = SHT31();
Application_serre app(&sht31);


void setup() {
   Serial.begin(9600);
   while(!Serial);
   Serial.println("begin...");  
   app.init();
}

void loop() {
   app.boucle();
}
