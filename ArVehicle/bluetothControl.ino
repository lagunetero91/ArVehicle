
uint8_t receiveCommand(){
  if(BTSerial.available()>0){
    command = BTSerial.readString();
    return 0;
  }
  return 1; // No comando
}

uint8_t do_OK(){
  BTSerial.println("OK");
  return 0;
}

