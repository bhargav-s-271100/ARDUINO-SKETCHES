int pin=9;
void setup() {
  pinMode(pin,OUTPUT);
}

void loop() {
  for(int i=0;i<=255;i++)
   {
      analogWrite(pin,i);
      delay(5);
    }
  delay(10);
   for(int i=255;i>=0;i--)
   {
    analogWrite(pin,i);
    delay(5); 
   }
 delay(10);  

}
