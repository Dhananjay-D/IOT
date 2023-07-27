#include<SoftwareSerial.h>
int trig=6;
int echo=7;
int l1=A2;
int l2=A3;
int l3=A4;
int l4=A5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);      
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT); 
  pinMode(l1,OUTPUT); 
  pinMode(l2,OUTPUT); 
  pinMode(l3,OUTPUT); 
  pinMode(l4,OUTPUT); 
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
  if(dist<20){
      digitalWrite(l1,HIGH);
       digitalWrite(l2,LOW);
       digitalWrite(l3,LOW);
       digitalWrite(l4,LOW);        
  }        
  else if(dist>20 && dist<35){
       digitalWrite(l2,HIGH);
       digitalWrite(l1,HIGH);
       digitalWrite(l3,LOW);
       digitalWrite(l4,LOW);         
  }
  else if(dist>35 && dist<55){
       digitalWrite(l2,HIGH);
       digitalWrite(l1,HIGH);
       digitalWrite(l3,HIGH);
       digitalWrite(l4,LOW);         
  }
  else if(dist>55){
       digitalWrite(l2,HIGH);
       digitalWrite(l1,HIGH);
       digitalWrite(l3,HIGH);
       digitalWrite(l4,HIGH);         
  }

}
