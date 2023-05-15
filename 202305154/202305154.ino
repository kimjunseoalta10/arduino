void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float status = analogRead(A0);
  float data = status * 5 / 1024;
  Serial.print(data, 3);
  Serial.println("[V]");
}
