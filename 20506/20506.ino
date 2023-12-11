#define trig 11
#define echo 12
#define pin 8
#define buzzer 7
#define motor 3
#define sensor 13

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(pin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.println(digitalRead(sensor));
  delay(100);
  analogWrite(motor, 240);
  int a=digitalRead(sensor);
  delay(100);
  if(a == 1){
    digitalWrite(pin,HIGH);
    digitalWrite(trig,HIGH);
    delayMicroseconds(10);
    digitalWrite(trig,LOW);
    float duration = pulseIn(echo,HIGH);
    float distance = duration * 340/10000/2;
    
    if (distance>200){
      analogWrite(motor,180);
      digitalWrite(buzzer,HIGH);
      delay(1000);
      digitalWrite(buzzer,LOW);
      delay(300);
    }
    else if (distance>100){
      analogWrite(motor,120);
      digitalWrite(buzzer,HIGH);
      delay(500);
      digitalWrite(buzzer,LOW);
      delay(300);
    }
    else if (distance>30){
      analogWrite(motor,60);
      digitalWrite(buzzer,HIGH);
      delay(100);
      digitalWrite(buzzer,LOW);
      delay(300);
    } 
    else{
      analogWrite(motor,0);
      digitalWrite(buzzer,LOW);
    }
    Serial.print("distance : ");
    Serial.println(distance);
  }
  else{
    digitalWrite(pin,LOW);
    digitalWrite(buzzer,LOW);
    
  }
  

}
