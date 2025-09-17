//variable
int LightOff = 2000;
int lightOn = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(lightOff);
  digitalWrite(LED_BUILTIN, LOW);
  delay(lightOn);
}

//circuit diagram - is a graphical representation of an electrical circuit

//documentation
//https://docs.arduino.cc/language-reference/?_gl=1*1s35t5a*_up*MQ..*_ga*MTM2NzgyNDk5Ni4xNzU4MDIyMDU3*_ga_NEXN8H46L5*czE3NTgwMjIwNTQkbzEkZzAkdDE3NTgwMjIwNTQkajYwJGwwJGgyMTMwNTczNjMw