#include<SoftwareSerial.h>
int l=A2;
int gas=A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);    
  pinMode(gas,INPUT);
  pinMode(l,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x=analogRead(gas);
  Serial.println(x);

  if(x>400){
    digitalWrite(l,HIGH);
    // delay(1000);
    // digitalWrite(l,LOW);
  }
  else{
    digitalWrite(l,LOW);
  }
}
