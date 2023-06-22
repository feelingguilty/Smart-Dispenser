#include<Servo.h>

Servo servo;
const int trigPin = 8;
const int echoPin = 9;

float distance, duration;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);

  servo.attach(11);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

 
  distance = pulseIn(echoPin, HIGH)*0.017;

  if (distance < 20){
    servo.write(0);
  }
  else{
    servo.write(90);
  }
  
delay(500);

}
