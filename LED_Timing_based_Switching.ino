#define SWITCH 7
#define LED 8
void setup() {
  pinMode(LED,OUTPUT);
  pinMode(SWITCH,INPUT);
  
}
static int a;
void loop() {
      a=digitalRead(SWITCH);
      if(digitalRead(SWITCH)!=a)
          digitalWrite(LED,!a);
}
