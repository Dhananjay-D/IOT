#include<LiquidCrystal.h>
#include<dht.h>
#include<SoftwareSerial.h>

//switch
int s1=10;
int s2=11;
int s3=12;
int s4=13;

//LIGHT
int l=5;

//GAS
int gas=A0;

//ULTRASONICS
int trig=6;
int echo=7;

//LCD
int rs=16;
int en=17,d4=13,d5=12,d6=11,d7=10;
LiquidCrystal LCD(rs,en,d4,d5,d6,d7);

//TEMPERATURE
dht DHT;
#define pin 4

void setup() {
  pinMode(gas,INPUT);
  pinMode(l,INPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT); 
  LCD.begin(16,2);
  Serial.begin(9600);
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);  
  pinMode(s3,INPUT);
  pinMode(s4,INPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=digitalRead(s1);
  int b=digitalRead(s2);
  int c=digitalRead(s3);
  int d=digitalRead(s4);
  char a1=Serial.read();  
  float temp;
  float humid;
  int w,x,y,z;
  //temperature code
  if(a==LOW){
      DHT.read11(pin);
     temp=DHT.temperature;
      humid=DHT.humidity;
      Serial.println(temp);
      Serial.println(humid);
  }

  //gas
  else if(b==LOW){
     w=analogRead(gas);
     Serial.println(w);
      }

  else if(c==LOW){
    y=digitalRead(l);
    Serial.println(y);
    }

  else if(d==LOW){
    digitalWrite(trig,LOW);
    delay(2);
    digitalWrite(trig,HIGH);
    delay(2);
    digitalWrite(trig,LOW);
    int duration=pulseIn(echo,HIGH);
    int dist=(0.03*duration)/2;
    Serial.println(dist);
      }
if(a1=='1'){
      LCD.print("Temp - ");
      LCD.print(temp);
      LCD.setCursor(0,1);
      LCD.print("HUMI - "); 
      LCD.print(humi);       
    }
    else if(a1=='2'){
      LCD.print("GAS - "); 
      LCD.print(w); 
    } 
    else if(a1=='3') 
    {
      Serial.println("")
    }         
}
