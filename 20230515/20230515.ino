void setup() {
  pinMode(13, INPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  int value = digitalRead(13);
  if(!value){ //!int == (int == 0) / int == (int != 0)
    digitalWrite(8, HIGH);
  }
  else{
    digitalWrite(8, LOW);
  }
  

}
