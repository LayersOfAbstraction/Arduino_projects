int redLED = 13;
int shorter = 50;
int longer = 150;
int longW=1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//SHORT 1
  digitalWrite(redLED,HIGH);
  delay(shorter);
  digitalWrite(redLED, LOW);
  delay(shorter);

//SHORT 2
  digitalWrite(redLED,HIGH);
  delay(shorter);
  digitalWrite(redLED, LOW);
  delay(shorter);

//SHORT 3
  digitalWrite(redLED,HIGH);
  delay(shorter);
  digitalWrite(redLED, LOW);
  delay(shorter);
//LONG 1
  digitalWrite(redLED,HIGH);
  delay(longer);
  digitalWrite(redLED, LOW);
  delay(longer);

//LONG 2
  digitalWrite(redLED,HIGH);
  delay(longer);
  digitalWrite(redLED, LOW);
  delay(longer);
//LONG 3
  digitalWrite(redLED,HIGH);
  delay(longer);
  digitalWrite(redLED, LOW);
  delay(longer);
//SHORT 1
  digitalWrite(redLED,HIGH);
  delay(shorter);
  digitalWrite(redLED, LOW);
  delay(shorter);

//SHORT 2
  digitalWrite(redLED,HIGH);
  delay(shorter);
  digitalWrite(redLED, LOW);
  delay(shorter);

//SHORT 3
  digitalWrite(redLED,HIGH);
  delay(shorter);
  digitalWrite(redLED, LOW);
  delay(shorter);  
  delay(longW);
}
