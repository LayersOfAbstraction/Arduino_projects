//FURTHER READING: https://roboticsbackend.com/arduino-handle-multiple-leds-using-arrays-and-functions/

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

/// @brief Controls short signals of all LEDs.
/// @param bolPowerOn Checks LED High or LOW. 
void shortLEDcode(bool bolPowerOn)
{
  Serial.println("powerOnAllLEDs(bool bolPowerOn) called.");
  int intShorter = 50;
  int intLongW = 1000;     
  if (bolPowerOn) 
  {
    Serial.println("if statement activated: " ); Serial.println("true");

    while(int intSigCount < 3)
    {
      Serial.println("short while loop activated. intSigCount=" + String(intSigCount) + "." ); Serial.println("true");

      for (int x = 0; x < _intLED; x++)  
      {            
          digitalWrite(_intArrLEDPins[x], HIGH);
          Serial.println("Short for loop array LED value: " + String(x) + " on.");
      }
      delay(intShorter);
      intSigCount++;
    }      
  }

  else 
  {
    Serial.println("Else statement activated: "); Serial.println("false"); 
    for (int y = 0; y < _intLED; y++)  
    {      
      digitalWrite(_intArrLEDPins[y], LOW);
      Serial.println("Short for loop array LED value: " + String(y) + " off.");              
    }
  }      
  delay(intLongW);
  Serial.println("Short for loop complete.");
}

/// @brief Controls long signals of all LEDs.
/// @param bolPowerOn Checks LED High or LOW. 
void longLEDcode(bool bolPowerOn)
{
  int intLonger = 150;
  int intLongW = 1000;

  for (int y = 0; y < _intLED; y++) 
  {
    Serial.println("long for loop activated: "); Serial.println(bolPowerOn);

    if (bolPowerOn) 
    {
      Serial.println("if statement activated: "); Serial.println(bolPowerOn);
      for(int i = 0; i < intSigCount; i++)
      {
        digitalWrite(_intArrLEDPins[y], HIGH);
        delay(intLonger);
        Serial.println("long for loop signal delay counter ON");
      }
    }
    
    else 
    {
      Serial.println("Else statement activated: "); Serial.println(bolPowerOn);
      for(int i = 0; i < intSigCount; i++)
      {        
        digitalWrite(_intArrLEDPins[y], LOW);
        delay(intLonger);
        Serial.println("long for loop signal delay counter OFF");
      }
    }    
  }
  delay(intLongW);
  Serial.println("long for loop complete.");
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
  shortLEDcode(true);
  wait_for_serial();
  shortLEDcode(false);
  wait_for_serial();
  longLEDcode(true);
  wait_for_serial();
  longLEDcode(false);
}      