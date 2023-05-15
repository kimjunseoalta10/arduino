#define redled 12
#define yellowled 8
#define greenled 4

void setup() {
  // put your setup code here, to run once:
  pinMode(redled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(greenled, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redled, HIGH);
  delay(500);
  digitalWrite(redled, LOW);
  delay(500);
  digitalWrite(yellowled, HIGH);
  delay(500);
  digitalWrite(yellowled, LOW);
  delay(500);
  digitalWrite(greenled, HIGH);
  delay(500);
  digitalWrite(greenled, LOW);
  delay(500);

}
