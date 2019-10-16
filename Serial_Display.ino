void setup() {
  Serial.begin(9600);
  Serial.println("Time elapsed in milliseconds : ");
}

void loop() {
  Serial.print(millis());
 //miilis()is a function which gives the time elapsed since the microcontroller was turned on in millisecs 
  Serial.print("\t");
  delay(300);
}
