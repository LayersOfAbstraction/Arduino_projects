#include <Arduino.h>

int _intCounter = 0;

int _intArrLEDPins[5] = {3,4,5,6,7};

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
      //This loop may not be needed. We need all lit up.
      for (int x = _intArrLEDPins[_intCounter]; x <= _intArrLEDPins[_intCounter]; x++)
      {
        //If short light has blinked 3 times
        if (shorter != 0)
          digitalWrite(_intArrLEDPins[0],HIGH);
          digitalWrite(_intArrLEDPins[1],HIGH);
          digitalWrite(_intArrLEDPins[2],HIGH);
          digitalWrite(_intArrLEDPins[3],HIGH);
          digitalWrite(_intArrLEDPins[4],HIGH);
          Serial.println("1st Short count complete.");
      }


      delay(shorter);
      digitalWrite(2,LOW);
      delay(shorter);
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