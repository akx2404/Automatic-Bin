#include<Servo.h>

const int tp=9;
const int ep=10;
long duration, distance;
Servo s;

void setup() {
  pinMode(tp,OUTPUT);
  pinMode(ep,INPUT);
  s.attach(5);
  Serial.begin(9600);
  
  

}

void loop() {
  digitalWrite(tp,LOW);
  delayMicroseconds(10); 
  digitalWrite(tp,HIGH);
  delayMicroseconds(10);
  digitalWrite(tp,LOW);
  duration=pulseIn(ep,HIGH); 
  distance=duration*0.034*0.5; 
  Serial.println(distance);
  delay(01000);


  if(distance<30){
    s.write(0);
  }
  
  else
    s.write(90);
}
