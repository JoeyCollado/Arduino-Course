//variable
int delayTime = 1000; //the time interval between LED on and off

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(delayTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(delayTime);
}

//variables = helps you store and recall information in your program/

//syntax = int variable = value;

//documentation
//https://docs.arduino.cc/language-reference/?_gl=1*1s35t5a*_up*MQ..*_ga*MTM2NzgyNDk5Ni4xNzU4MDIyMDU3*_ga_NEXN8H46L5*czE3NTgwMjIwNTQkbzEkZzAkdDE3NTgwMjIwNTQkajYwJGwwJGgyMTMwNTczNjMw