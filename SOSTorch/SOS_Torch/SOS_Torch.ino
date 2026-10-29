//FURTHER READING: roboticsbackend.com/arduino-handle-multiple-leds-using-arrays-and-functions/

#include "Arduino.h"

/// @brief Total elements array is to contain.
const byte _intLED = 5;

/// @brief Each digit refers to pin ID on the UNO. 
byte _intArrLEDPins[_intLED] = {2,3,4,5,6};

/// @brief Sets all LEDS to OUTPUT.

void initAllLEDs()
{
  Serial.println("initAllLEDs() called");
  for (int i = 0; i < _intLED; i++) {
    Serial.println("initAllLEDs() for loop called");
    pinMode(_intArrLEDPins[i], OUTPUT);
  }
}

/// @brief Pauses the code to analyse in Serial Monitor.
void wait_for_serial()
{
  Serial.println("before wait serial");
  while (!Serial.available())
  {
    Serial.println("waiting for serial");
    delay(5000);
  };

  // Read everything from serial
  String s = Serial.readString();
  Serial.print("Read from serial:"); Serial.println(s);  
}

/// @brief Controls long & short signals of all LEDs. i = signal timer for long & short
/// @param bolPowerOn Checks LED High or LOW. 
void powerOnAllLEDs(bool bolPowerOn)
{
  Serial.println("powerOnAllLEDs(bool bolPowerOn) called.");
  int intShorter = 50;
  int intLonger = 150;
  int intLongW = 1000;
  int intSigCount = 3; 

  //SHORT signal
  for (int x = 0; x < _intLED; x++)  
  {      
      Serial.println("Short for loop activated.");      
      if (bolPowerOn) 
      {        
        Serial.println("if statement activated: " ); Serial.println(bolPowerOn);
        for(int i = 0; i < intSigCount; i++)
          Serial.println("Short for loop signal delay counter ON");
          digitalWrite(_intArrLEDPins[x], HIGH);
          delay(intShorter);
      }
      else 
      {
        Serial.println("Else statement activated: "); Serial.println(bolPowerOn);
        for(int i = 0; i < intSigCount; i++)
          Serial.println("Short for loop signal delay counter OFF");
          digitalWrite(_intArrLEDPins[x], LOW);
          delay(intShorter);
      }    
  }
  delay(intLongW);
  Serial.println("Short for loop complete.");
  wait_for_serial();

  //LONG signal
  for (int y = 0; y < _intLED; y++) 
  {
    Serial.println("long for loop activated: "); Serial.println(bolPowerOn);

    if (bolPowerOn) 
    {
      Serial.println("if statement activated: "); Serial.println(bolPowerOn);
      for(int i = 0; i < intSigCount; i++)
        Serial.println("long for loop signal delay counter ON");
        digitalWrite(_intArrLEDPins[y], HIGH);
        delay(intLonger);
    }
    
    else 
    {
      Serial.println("Else statement activated: "); Serial.println(bolPowerOn);
      for(int i = 0; i < intSigCount; i++)
        Serial.println("long for loop signal delay counter OFF");
        digitalWrite(_intArrLEDPins[y], LOW);
        delay(intLonger);
    }    
  }
  delay(intLongW);
  Serial.println("long for loop complete.");
  wait_for_serial();
}
void setup() {
   // put your setup code here, to run once:
   Serial.begin(115200);
   Serial.println("setup() called");
  initAllLEDs();
}

void loop() {
  Serial.println("loop() called");
  // put your main code here, to run repeatedly:
  powerOnAllLEDs(true);
  wait_for_serial();
  powerOnAllLEDs(false);
  wait_for_serial();
}      