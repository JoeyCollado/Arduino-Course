void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);  //initialize pin 5 as output mode
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, HIGH);  //light up the LED
  delay(1000);            //wait for one second
  digitalWrite(5, LOW);   // light off the LED
  delay(1000);            //wait for one second
}
