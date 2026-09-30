void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("setup() called");
}

void loop() 
{
  // put your main code here, to run repeatedly:
  /*HOME WORK
  * For part 5 ensure you create a counter that counts 0 to 15.
  * Get the following Objects:
  * Get intRed, intYellow intBlue and intGreen LEDs.
  */   
  int intRed = 2;
  int intYellow = 3;
  int intBlue = 4;
  int intGreen = 5;
  int intDelay = 1000;
  pinMode(intRed,OUTPUT);
  pinMode(intYellow,OUTPUT);
  pinMode(intBlue,OUTPUT);
  pinMode(intGreen,OUTPUT);
  Serial.println("Decimal number 0");
  digitalWrite(intRed,LOW); digitalWrite(intYellow,LOW); digitalWrite(intBlue,LOW); digitalWrite(intGreen,LOW);
  delay(intDelay);

  Serial.println("Decimal number 1");
  digitalWrite(intRed,LOW); digitalWrite(intYellow,LOW); digitalWrite(intBlue,LOW); digitalWrite(intGreen,HIGH);
  delay(intDelay);

  Serial.println("Decimal number 2");
  digitalWrite(intRed,LOW); digitalWrite(intYellow,LOW); digitalWrite(intBlue,HIGH); digitalWrite(intGreen,HIGH);
  delay(intDelay);

  Serial.println("Decimal number 3"); 
  digitalWrite(intRed,LOW); digitalWrite(intYellow,LOW); digitalWrite(intBlue,HIGH); digitalWrite(intGreen,HIGH);
  delay(intDelay);

  Serial.println("Decimal number 4");
  digitalWrite(intRed,LOW); digitalWrite(intYellow,HIGH); digitalWrite(intBlue,LOW); digitalWrite(intGreen,LOW);
  delay(intDelay);

  Serial.println("Decimal number 5");
  digitalWrite(intRed, LOW); digitalWrite(intYellow, HIGH); digitalWrite(intBlue, LOW); digitalWrite(intGreen, HIGH);
  delay(intDelay);
  
  Serial.println("Decimal number 6");
  digitalWrite(intRed, LOW); digitalWrite(intYellow, HIGH); digitalWrite(intBlue, HIGH); digitalWrite(intGreen, LOW);
  delay(intDelay);
  
  Serial.println("Decimal number 7");
  digitalWrite(intRed, LOW); digitalWrite(intYellow, HIGH); digitalWrite(intBlue, HIGH); digitalWrite(intGreen, HIGH);
  delay(intDelay);
  
  Serial.println("Decimal number 8");
  digitalWrite(intRed, HIGH); digitalWrite(intYellow, LOW); digitalWrite(intBlue, LOW); digitalWrite(intGreen, LOW);
  delay(intDelay);
  
  Serial.println("Decimal number 9");
  digitalWrite(intRed, HIGH); digitalWrite(intYellow, LOW); digitalWrite(intBlue, LOW); digitalWrite(intGreen, HIGH);
  delay(intDelay);
  
  Serial.println("Decimal number 10");
  digitalWrite(intRed, HIGH); digitalWrite(intYellow, LOW); digitalWrite(intBlue, HIGH); digitalWrite(intGreen, LOW);
  delay(intDelay);
  
  Serial.println("Decimal number 11");
  digitalWrite(intRed, HIGH); digitalWrite(intYellow, LOW); digitalWrite(intBlue, HIGH); digitalWrite(intGreen, HIGH);
  delay(intDelay);
  
  Serial.println("Decimal number 12");
  digitalWrite(intRed, HIGH); digitalWrite(intYellow, HIGH); digitalWrite(intBlue, LOW); digitalWrite(intGreen, LOW);
  delay(intDelay);
  
  Serial.println("Decimal number 13");
  digitalWrite(intRed, HIGH); digitalWrite(intYellow, HIGH); digitalWrite(intBlue, LOW); digitalWrite(intGreen, HIGH);
  delay(intDelay);
  
  Serial.println("Decimal number 14");
  digitalWrite(intRed, HIGH); digitalWrite(intYellow, HIGH); digitalWrite(intBlue, HIGH); digitalWrite(intGreen, LOW);
  delay(intDelay);
  
  Serial.println("Decimal number 15");
  digitalWrite(intRed, HIGH); digitalWrite(intYellow, HIGH); digitalWrite(intBlue, HIGH); digitalWrite(intGreen, HIGH);
  delay(intDelay);
}
