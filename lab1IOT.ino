// int l=3;
// void setup(){
//   pinMode(l,OUTPUT);
// }

// void loop(){
//   digitalWrite(l,HIGH);
//   digitalWrite(l,LOW);
// }

//---------------

// int l1=3,l2=4,l3=5,l4=6;
// void setup(){
//   pinMode(l1,OUTPUT);
//   pinMode(l2,OUTPUT);
//   pinMode(l3,OUTPUT);
//   pinMode(l4,OUTPUT);
// }

// void loop(){
//   digitalWrite(l1,HIGH);
//   digitalWrite(l2,LOW);
//   digitalWrite(l3,LOW);
//   digitalWrite(l4,LOW);
//   delay(1000);
//   digitalWrite(l2,HIGH);
//   digitalWrite(l1,LOW);
//   digitalWrite(l3,LOW);
//   digitalWrite(l4,LOW);
//   delay(1000);
//   digitalWrite(l3,HIGH);
//   digitalWrite(l2,LOW);
//   digitalWrite(l1,LOW);
//   digitalWrite(l4,LOW);
//   delay(1000);
//   digitalWrite(l4,HIGH);
//   digitalWrite(l2,LOW);
//   digitalWrite(l3,LOW);
//   digitalWrite(l1,LOW);
//   delay(1000);
// }

int l=A2,s1=10;
void setup(){
    
  pinMode(l,OUTPUT);
  pinMode(s1,INPUT);

}

void loop(){

  if(digitalRead(s1)==HIGH)
  {
   digitalWrite(l,LOW); 
  }
else{
  digitalWrite(l,HIGH);  
}
}


