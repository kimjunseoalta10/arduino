void setup() {
  pinMode(8, INPUT);
  Serial.begin(9600);

}

void loop() {
  int value = digitalRead(8);
  Serial.print("value = ");
  Serial.println(value);

}
