#include <SoftwareSerial.h>
int rx = 11, tx = 10;
int gas = A0;
int trig = 6;
int echo = 7;
SoftwareSerial Bluetooth(rx, tx);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Bluetooth.begin(9600);
  pinMode(gas, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  char a;

  if (Bluetooth.available() > 0) {
    a = Bluetooth.read();
    
    if (a == 'g') {
      int x = analogRead(gas);
      Serial.println("gas value: ");
        Serial.print(x);
    } 
     if (a == 'd') {
      digitalWrite(trig, LOW);
      delay(2);
      digitalWrite(trig, HIGH);
      delay(2);
      digitalWrite(trig, LOW);
      int duration = pulseIn(echo, HIGH);
      int dist = (0.03 * duration) / 2;
      Serial.println("Distane: ");
      Serial.print(dist);
    }
    
  }
}
