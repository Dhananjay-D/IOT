#include<SoftwareSerial.h>

int l1=A2;
int l2=A3;
int l3=A4;
int l4=A5;

int gas=A0;

int s1=10;
int s2=11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
      
  pinMode(gas,INPUT);
  
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);
      
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=digitalRead(s1);
  int b=digitalRead(s2);
  if(a==LOW){               //low because this device works in reverse manner
  digitalWrite(l1,HIGH);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  delay(1000);
  digitalWrite(l2,HIGH);
  digitalWrite(l1,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  delay(1000);
  digitalWrite(l3,HIGH);
  digitalWrite(l2,LOW);
  digitalWrite(l1,LOW);
  digitalWrite(l4,LOW);
  delay(1000);
  digitalWrite(l4,HIGH);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l1,LOW);
  delay(1000);
  }

  if(b==LOW){                     //low because this device works in reverse manner
    int x=analogRead(gas);
    Serial.println(x);

  if(x>400){
    digitalWrite(l1,HIGH);
    digitalWrite(l2,HIGH);
    digitalWrite(l3,HIGH);
    digitalWrite(l4,HIGH);
  }
  
  }

  
}
