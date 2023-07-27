#include<SoftwareSerial.h>
int gas=A0;
int l=5;
int red=A2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);    
  pinMode(gas,INPUT);
  pinMode(l,INPUT);
  pinMode(red,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x=analogRead(gas);
  int y=digitalRead(l);
  Serial.println(x);
  
  if(y==0){
    if(x>160){
      digitalWrite(red,HIGH);
    }
  }
  else{
       digitalWrite(red,LOW);    
  }
  
}
