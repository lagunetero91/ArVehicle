#include <SoftwareSerial.h>
#include "Arvehicle.h"

void setup() {
  #if defined(_DEBUG)
    Serial.begin(9600); //Iniciamos puerto serie para mensajes de deputación.
  #endif
    BTSerial.begin(9600); //Iniciamos comunicación serie con el módulo Bluetooth.
}

void loop() {
  // put your main code here, to run repeatedly:
  if(receiveCommand() == 0){
   #if defined(_DEBUG)
    Serial.print("El comando es: "); 
    Serial.println(command);
   #endif
   uint8_t status = moveVehicle((uint8_t)atoi(command.c_str()));
   #if defined(_DEBUG)
    Serial.print("moveVehicle devolvió: "); 
    Serial.println(status);
  #endif
  }
  
}
