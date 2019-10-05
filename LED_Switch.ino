void setup() {
  pinMode(8,OUTPUT);
  pinMode(7,INPUT);
  
}


void loop() {
  
if(digitalRead(7)==0)
  {
    digitalWrite(8,1);
  }
  else
  {
    digitalWrite(8,0);
  }
}
