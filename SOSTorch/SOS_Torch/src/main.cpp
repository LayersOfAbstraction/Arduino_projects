#include <Arduino.h>

int whiteLED_Three = 3;
int whiteLED_Four = 4;
int whiteLED_Five = 5;
int whiteLED_Six = 6;
int whiteLED_Seven = 7;

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
  pinMode(whiteLED_Three, OUTPUT);
  pinMode(whiteLED_Four, OUTPUT);
  pinMode(whiteLED_Five, OUTPUT);
  pinMode(whiteLED_Six, OUTPUT);
  pinMode(whiteLED_Seven, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

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