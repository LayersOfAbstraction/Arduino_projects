#include <Arduino.h>

int _intArrLEDPins[5] = {3,4,5,6,7};

// int whiteLED_Three = 3;
// int whiteLED_Four = 4;
// int whiteLED_Five = 5;
// int whiteLED_Six = 6;
// int whiteLED_Seven = 7;

int shorter = 50;
int longer = 150;

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

void setup() {
  // put your setup code here, to run once:
  pinMode(_intArrLEDPins[0], OUTPUT);
  pinMode(_intArrLEDPins[1], OUTPUT);
  pinMode(_intArrLEDPins[2], OUTPUT);
  pinMode(_intArrLEDPins[3], OUTPUT);
  pinMode(_intArrLEDPins[4], OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//SHORT 1
    for (int i = 3; i >= 1; i--)
    { 
      Serial.println("1st Short Count: " + i);
      digitalWrite(2,HIGH);
      delay(550);
      digitalWrite(2,LOW);
      delay(550);
    }

  digitalWrite(whiteLED_Three,HIGH);
  delay(shorter);
  digitalWrite(whiteLED_Three, LOW);
  delay(shorter);

//SHORT 2
  digitalWrite(whiteLED_Three,HIGH);
  delay(shorter);
  digitalWrite(whiteLED_Three, LOW);
  delay(shorter);

//SHORT 3
  digitalWrite(whiteLED_Three,HIGH);
  delay(shorter);
  digitalWrite(whiteLED_Three, LOW);
  delay(shorter);
//LONG 1
  digitalWrite(whiteLED_Three,HIGH);
  delay(longer);
  digitalWrite(whiteLED_Three, LOW);
  delay(longer);

//LONG 2
  digitalWrite(whiteLED_Three,HIGH);
  delay(longer);
  digitalWrite(whiteLED_Three, LOW);
  delay(longer);
//LONG 3
  digitalWrite(whiteLED_Three,HIGH);
  delay(longer);
  digitalWrite(whiteLED_Three, LOW);
  delay(longer);
//SHORT 1
  digitalWrite(whiteLED_Three,HIGH);
  delay(shorter);
  digitalWrite(whiteLED_Three, LOW);
  delay(shorter);

//SHORT 2
  digitalWrite(whiteLED_Three,HIGH);
  delay(shorter);
  digitalWrite(whiteLED_Three, LOW);
  delay(shorter);

//SHORT 3
  digitalWrite(whiteLED_Three,HIGH);
  delay(shorter);
  digitalWrite(whiteLED_Three, LOW);
  delay(shorter);  
  wait_for_serial();

//STUB: Condence SOS logic.
//GET pins 1 to 5.
//SOS_ShortCounter=3.
//SOS_LongCounter=3.

//FOR i = 0; i < SOS_ShortCounter;i++;
//SHORT 1
// LED ARRAY??? 


//LONG 2
//SHORT 3


}