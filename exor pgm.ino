int s1=10;
int s2=11;
int l=A2;



void setup() {
  // put your setup code here, to run once:
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  pinMode(l,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x=digitalRead(s1);
  int y=digitalRead(s2);
  if(x^y==1){
    digitalWrite(l,HIGH);
  }  
  else{
    digitalWrite(l,LOW);    
  }
}
