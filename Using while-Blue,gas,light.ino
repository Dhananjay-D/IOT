#include<SoftwareSerial.h>

int rx = 11;
int tx = 10;
int gas = A0;
int trig = 6;
int echo = 7;
SoftwareSerial Bluetooth(rx, tx);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Bluetooth.begin(9600);
  pinMode(gas, INPUT);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Bluetooth.available() > 0) {
    char a = Bluetooth.read();

    while (a == 'g') {

      Serial.println(analogRead(gas));
      if (Bluetooth.available() < 0) {
        continue;
      }
      else if (Bluetooth.available() > 0) {
        if (Bluetooth.read() == 's')
          break;
      }


    }


    while (a == 'd') {
      
      digitalWrite(trig, LOW);
      delay(2);
      digitalWrite(trig, HIGH);

      delay(2);
      digitalWrite(trig, LOW);
      int  duration = pulseIn(echo, HIGH);
      int dist = (0.0354 * duration) / 2;
      dist:
      Serial.println(dist);
      if(Bluetooth.available()<0){
        continue;
      }
      else if(Bluetooth.available()>0){
        if (Bluetooth.read() == 's'){
          break;
      }

    }
  }
}
}