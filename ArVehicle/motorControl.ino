
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
  
}

void goDown(){

}

void goRight(){
  
}

void goLeft(){

}

