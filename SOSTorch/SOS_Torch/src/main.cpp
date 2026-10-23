//FURTHER READING: https://roboticsbackend.com/arduino-handle-multiple-leds-using-arrays-and-functions/
#include <Arduino.h>

#pragma GCC region "Variables and arrays"
/// @brief Total elements array is to contain.
const byte _intLED = 5;

/// @brief Each digit refers to pin ID on the UNO. 
byte _intArrLEDPins[_intLED] = {2,3,4,5,6};

#pragma GCC endregion "Variables and arrays"

#pragma GCC region "Functions"

/// @brief Sets all LEDS to OUTPUT.
void initAllLEDs()
{
  for (int i = 0; i < _intLED; i++) {
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
    delay(1000);
  };

  // Read everything from serial
  String s = Serial.readString();
  Serial.print("Read from serial:"); Serial.println(s);  
}

/// @brief Controls long & short signals of all LEDs
/// @param bolPowerOn Checks if LED High or Low. 
void powerOnAllLEDs(bool bolPowerOn)
{
  int intShorter = 50;
  int intlonger = 150;
  //SHORT signal
  for (int i = 0; i < _intLED; i++) 
  {
    if (bolPowerOn) 
    {
      digitalWrite(_intArrLEDPins[i], HIGH);
      delay(intShorter);
    }

    else 
    {
      digitalWrite(_intArrLEDPins[i], LOW);
      delay(intShorter);
    }    
  }
  //LONG signal
  for (int i = 0; i < _intLED; i++) 
  {
    if (bolPowerOn) 
    {
      digitalWrite(_intArrLEDPins[i], HIGH);
      delay(intlonger);
    }
    
    else 
    {
      digitalWrite(_intArrLEDPins[i], LOW);
      delay(intlonger);
    }    
  }
}
#pragma GCC endregion "Functions"

#pragma GCC region "Default Events"
void setup() {
  // put your setup code here, to run once:
  initAllLEDs();
}

void loop() {
  // put your main code here, to run repeatedly:
  powerOnAllLEDs(true);
  wait_for_serial();
  powerOnAllLEDs(false);
  wait_for_serial();
}      
#pragma GCC endregion "Default Events"