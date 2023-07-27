#include<LiquidCrystal.h>
#include<dht.h>
#include<SoftwareSerial.h>

int rs=16;
int en=17,d4=13,d5=12,d6=11,d7=10;
LiquidCrystal LCD(rs,en,d4,d5,d6,d7);
dht DHT;
#define pin 4

void setup() {
  LCD.begin(16,2);
  Serial.begin(9600);
}

void loop() {
      DHT.read11(pin);
      float temp=DHT.temperature;
      float humid=DHT.humidity;
      LCD.print("Temp= ");
      LCD.print(temp);
      LCD.setCursor(0,1);      
      // LCD.print("Humid= "+humid);
}
