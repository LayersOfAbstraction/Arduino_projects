#include <Arduino.h>
  int _intBlue = 2;
  int _intYellow = 3;
  int _intOrange = 4;
  int _intGreen = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("setup() called");
  pinMode(_intBlue,OUTPUT);
  pinMode(_intYellow,OUTPUT);
  pinMode(_intOrange,OUTPUT);
  pinMode(_intGreen,OUTPUT);
}

/// @brief Pauses code. Scans output.
void wait_for_serial()
{
  Serial.println("before wait serial");
  while (!Serial.available())
  {
    Serial.println("waiting for serial");
    delay(1000);
  };

  // Read everything from serial
  String s = Serial.readString();
  Serial.print("Read from serial:"); Serial.println(s);
}


void loop() 
{
  // put your main code here, to run repeatedly:
  /*HOME WORK
  * For part 5 ensure you create a counter that counts 0 to 15.
  * Get the following Objects:
  * Get _intBlue, _intYellow _intOrange and _intGreen LEDs.
  */   

  for (int i = 0; i < 16; i++)
  {
    _intBlue  = (i >> 0) & 1; // 1
    _intYellow = (i >> 1) & 1; // 0
    _intOrange  = (i >> 2) & 1; // 1
    _intGreen = (i >> 3) & 1; // 1
  }
  Serial.println("Decimal number 0");//✔
  digitalWrite(_intBlue,LOW); digitalWrite(_intYellow,LOW); digitalWrite(_intOrange,LOW); digitalWrite(_intGreen,LOW);
  wait_for_serial();

  Serial.println("Decimal number 1");//✔
  digitalWrite(_intBlue,LOW); digitalWrite(_intYellow,LOW); digitalWrite(_intOrange,LOW); digitalWrite(_intGreen,HIGH);
  wait_for_serial();

  Serial.println("Decimal number 2");//✔
  digitalWrite(_intBlue,LOW); digitalWrite(_intYellow,LOW); digitalWrite(_intOrange,HIGH); digitalWrite(_intGreen,LOW);
  wait_for_serial();

  Serial.println("Decimal number 3");////❌
  digitalWrite(_intBlue,LOW); digitalWrite(_intYellow,LOW); digitalWrite(_intOrange,HIGH); digitalWrite(_intGreen,HIGH);
  wait_for_serial();

  Serial.println("Decimal number 4");//❌
  digitalWrite(_intBlue,LOW), digitalWrite(_intYellow,HIGH); digitalWrite(_intOrange,LOW); digitalWrite(_intGreen,LOW); 
  wait_for_serial();

  Serial.println("Decimal number 5");
  digitalWrite(_intBlue,LOW); digitalWrite(_intYellow,HIGH); digitalWrite(_intOrange,LOW); digitalWrite(_intGreen,HIGH);
  wait_for_serial();
  
  Serial.println("Decimal number 6");
  digitalWrite(_intBlue,LOW); digitalWrite(_intYellow,HIGH); digitalWrite(_intOrange,HIGH); digitalWrite(_intGreen,LOW);
  wait_for_serial();
  
  Serial.println("Decimal number 7");
  digitalWrite(_intBlue,LOW); digitalWrite(_intYellow,HIGH); digitalWrite(_intOrange,HIGH); digitalWrite(_intGreen,HIGH);
  wait_for_serial();
  
  Serial.println("Decimal number 8");
  digitalWrite(_intBlue,HIGH); digitalWrite(_intYellow,LOW); digitalWrite(_intOrange,LOW); digitalWrite(_intGreen,LOW);
  wait_for_serial();
  
  Serial.println("Decimal number 9");
  digitalWrite(_intBlue,HIGH); digitalWrite(_intYellow,LOW); digitalWrite(_intOrange,LOW); digitalWrite(_intGreen,HIGH);
  wait_for_serial();
  
  Serial.println("Decimal number 10");
  digitalWrite(_intBlue,HIGH); digitalWrite(_intYellow,LOW); digitalWrite(_intOrange,HIGH); digitalWrite(_intGreen,LOW);
  wait_for_serial();
  
  Serial.println("Decimal number 11");
  digitalWrite(_intBlue,HIGH); digitalWrite(_intYellow,LOW); digitalWrite(_intOrange,HIGH); digitalWrite(_intGreen,HIGH);
  wait_for_serial();
  
  Serial.println("Decimal number 12");
  digitalWrite(_intBlue,HIGH); digitalWrite(_intYellow,HIGH); digitalWrite(_intOrange,LOW); digitalWrite(_intGreen,LOW);
  wait_for_serial();
  
  Serial.println("Decimal number 13");
  digitalWrite(_intBlue,HIGH); digitalWrite(_intYellow,HIGH); digitalWrite(_intOrange,LOW); digitalWrite(_intGreen,HIGH);
  wait_for_serial();
  
  Serial.println("Decimal number 14");
  digitalWrite(_intBlue,HIGH); digitalWrite(_intYellow,HIGH); digitalWrite(_intOrange,HIGH); digitalWrite(_intGreen,LOW);
  wait_for_serial();
  
  Serial.println("Decimal number 15");
  digitalWrite(_intBlue,HIGH); digitalWrite(_intYellow,HIGH); digitalWrite(_intOrange,HIGH); digitalWrite(_intGreen,HIGH);
  wait_for_serial();
}
