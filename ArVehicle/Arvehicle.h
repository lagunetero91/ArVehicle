#define _DEBUG  //Descomentar para ver mensaje de depuración

// Pines
#define pinRX 7
#define pinTX 8

#define rightMotorA A0
#define rightMotorB A1
#define leftMotorA  A2
#define leftMotorB  A3

// Commandos
#define movRigh 1
#define movLeft 2
#define goAhead 3
#define goBack  4

String command;

//software serial
SoftwareSerial BTSerial(7,8);

