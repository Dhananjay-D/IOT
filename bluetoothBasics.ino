#include<SoftwareSerial.h>

int rx=11,tx=10;

SoftwareSerial Bluetooth(rx,tx);

void setup() {
  // put your setup code here, to run once:
      Serial.begin(9600);
      Bluetooth.begin(9600);      
} 

void loop() {
  // put your main code here, to run repeatedly:
  if(Bluetooth.available() > 0){
         String a=Bluetooth.readString();
          Serial.print(a);
  }
}
