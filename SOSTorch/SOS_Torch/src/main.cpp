//FURTHER READING: https://roboticsbackend.com/arduino-handle-multiple-leds-using-arrays-and-functions/
#include <Arduino.h>

#pragma region "Variables and arrays"
const byte _intLED = 5;

byte _intArrLEDPins[_intLED] = {3,4,5,6,7};

int _intShorter = 50;
int _intlonger = 150;
#pragma endregion "Variables and arrays"

#pragma region "Functions"
void initAllLEDs()
{
  for (int i = 0; i < _intLED; i++) {
    pinMode(_intArrLEDPins[i], OUTPUT);
  }
}

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
#pragma endregion "Functions"

void setup() {
  // put your setup code here, to run once:
  initAllLEDs();
}

void loop() {
  // put your main code here, to run repeatedly:

    for (int i = 3; i >= 1; i--)
    { 
        //If short light has blinked 3 times
        if (_intShorter != 0)
        {          
          digitalWrite(_intArrLEDPins[0],HIGH);
          digitalWrite(_intArrLEDPins[1],HIGH);
          digitalWrite(_intArrLEDPins[2],HIGH);
          digitalWrite(_intArrLEDPins[3],HIGH);
          digitalWrite(_intArrLEDPins[4],HIGH);
          delay(_intShorter);
          digitalWrite(_intArrLEDPins[0],LOW);
          digitalWrite(_intArrLEDPins[1],LOW);
          digitalWrite(_intArrLEDPins[2],LOW);
          digitalWrite(_intArrLEDPins[3],LOW);
          digitalWrite(_intArrLEDPins[4],LOW);
          delay(_intShorter);
        }

        else if(_intlonger != 0)
        {
          int PinCounter;
          while(PinCounter < 4)
          {
            digitalWrite(_intArrLEDPins[PinCounter],HIGH);
            PinCounter++;
            delay(_intlonger);

          }
          
          digitalWrite(_intArrLEDPins[0],HIGH);
          digitalWrite(_intArrLEDPins[1],HIGH);
          digitalWrite(_intArrLEDPins[2],HIGH);
          digitalWrite(_intArrLEDPins[3],HIGH);
          digitalWrite(_intArrLEDPins[4],HIGH);
          delay(_intShorter);
          digitalWrite(_intArrLEDPins[0],LOW);
          digitalWrite(_intArrLEDPins[1],LOW);
          digitalWrite(_intArrLEDPins[2],LOW);
          digitalWrite(_intArrLEDPins[3],LOW);
          digitalWrite(_intArrLEDPins[4],LOW);
          Serial.println("1st Short count complete.");
        }
      }


      
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