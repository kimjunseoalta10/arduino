void setup() {
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  int value = digitalRead(8);
  if(value == 0) {
    digitalWrite(13, LOW);
  }
  else{
    digitalWrite(13, HIGH);
  }

}
