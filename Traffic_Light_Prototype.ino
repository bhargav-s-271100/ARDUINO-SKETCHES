#define RED_LED 7
#define YELLOW_LED 8
#define GREEN_LED 12
void setup() {
  pinMode(RED_LED,OUTPUT);
  pinMode(YELLOW_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT);
}

void loop() 
  {
    digitalWrite(RED_LED,1);
    delay(10000);
    digitalWrite(YELLOW_LED,1);
    delay(1000);
    digitalWrite(RED_LED,0);
    digitalWrite(YELLOW_LED,0);
    digitalWrite(GREEN_LED,1);
    delay(10000);
    for(int i=0;i<3;i++)
    {
      digitalWrite(GREEN_LED,0);
      delay(1000);
      digitalWrite(GREEN_LED,1);
      delay(1000);
    }
    digitalWrite(GREEN_LED,0);
    digitalWrite(YELLOW_LED,1);
    delay(1000);
    digitalWrite(YELLOW_LED,0);
  }
