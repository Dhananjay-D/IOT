#include<SoftwareSerial.h>
int buzz=9;
int gas=A0;
int l=5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);    
  pinMode(gas,INPUT);
  pinMode(l,INPUT);
  pinMode(buzz,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int y=analogRead(gas);
  int x=digitalRead(l);
  Serial.println(x);

  if(y<400 && y==0){
    digitalWrite(l,LOW);
  }
  else{
    digitalWrite(l,HIGH);
  }
  
}
//not executed