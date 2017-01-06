
uint8_t moveVehicle(uint8_t dir){
  switch(dir){
    case 1:
      goRight();
      break;
    case 2:
      goLeft();
      break;
    case 3:
      goUp();
      break;
    case 4:
      goDown(); 
      break;
    default:
      return 1;
      break;
  }
  return 0;
}

void goUp(){
  pinMode(rightMotorA,OUTPUT);
  pinMode(leftMotorA,OUTPUT);
  pinMode(rightMotorB,INPUT);
  pinMode(leftMotorB,INPUT);
  digitalWrite(rightMotorB,LOW);
  digitalWrite(leftMotorB,LOW);
  analogWrite(rightMotorA,200);
  analogWrite(leftMotorA,200);
}

void goDown(){
  pinMode(rightMotorA,INPUT);
  pinMode(leftMotorA,INPUT);
  pinMode(rightMotorB,OUTPUT);
  pinMode(leftMotorB,OUTPUT);
  digitalWrite(rightMotorA,LOW);
  digitalWrite(leftMotorA,LOW);
  analogWrite(rightMotorB,200);
  analogWrite(leftMotorB,200);
 
}

void goRight(){
  
}

void goLeft(){

}

