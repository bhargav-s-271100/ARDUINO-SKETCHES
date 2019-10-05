int p1=4,p2=8,p3=12,p4=2;
void setup()
{
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);
  pinMode(p3,OUTPUT);
  pinMode(p4,OUTPUT);
   int i;
  for(i=0;i<5;i++)
  {
    switch(i)
  {
    case 0 :
        digitalWrite(p1,0);
        digitalWrite(p2,0);
        digitalWrite(p3,0);
        digitalWrite(p4,0);
        break;
    case 1 :
        digitalWrite(p1,1);
        digitalWrite(p2,0);
        digitalWrite(p3,0);
        digitalWrite(p4,0);
        break;
    case 2 :
        digitalWrite(p1,0);
        digitalWrite(p2,1);
        digitalWrite(p3,0);
        digitalWrite(p4,0);
        break;
    case 3 :
        digitalWrite(p1,1);
        digitalWrite(p2,1);
        digitalWrite(p3,0);
        digitalWrite(p4,0);
        break;
    case 4 :
        digitalWrite(p1,0);
        digitalWrite(p2,0);
        digitalWrite(p3,1);
        digitalWrite(p4,0);
        break;
    case 5 :
        digitalWrite(p1,1);
        digitalWrite(p2,0);
        digitalWrite(p3,1);
        digitalWrite(p4,0);
        break;
  }
  delay(500);
  }
}
void loop(){
}
