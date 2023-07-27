#include<SoftwareSerial.h>
int trig=6;
int echo=7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);      
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
      digitalWrite(trig,LOW);
      delay(2);
      digitalWrite(trig,HIGH);
      delay(2);
      digitalWrite(trig,LOW);
      int duration=pulseIn(echo,HIGH);
      int dist=(0.03*duration)/2;
      Serial.println(dist);
}
