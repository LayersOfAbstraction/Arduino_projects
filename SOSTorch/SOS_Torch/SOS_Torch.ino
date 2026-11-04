//FURTHER READING: https://roboticsbackend.com/arduino-handle-multiple-leds-using-arrays-and-functions/
#include "Arduino.h"

/// @brief Total elements array is to contain.
const byte _bytLED = 5;

/// @brief 1 second delay
int _intLongW = 1000;

/// @brief Each digit refers to pin ID on the UNO. 
byte _intArrLEDPins[_bytLED] = {2,3,4,5,6};

/// @brief Sets all LEDS's pinMode to OUTPUT.
void initAllLEDs()
{
  Serial.println("initAllLEDs() called");
  for (int i = 0; i < _bytLED; i++) {
    Serial.println("initAllLEDs() for loop called");
    pinMode(_intArrLEDPins[i], OUTPUT);
  }
}

/// @brief Pauses the code to analyze in Serial Monitor.
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

/// @brief Turns short signals of all LEDs on, delays then goes off for humans to see.
/// @param bolPowerOn Checks LED High or LOW. 
void shortLEDcode()
{
  Serial.println("shortLEDcode called.");
  int intShorter = 50; // 50 milliseconds appropriate for licensed radio operators.

  int intSigCount = 0;

  while(intSigCount < 3)
  {
    Serial.println("Short while loop activated. intSigCount=" + String(intSigCount) + "." ); Serial.println("true");      
    for(int i = 0; i < _bytLED; i++)
    {
      digitalWrite(_intArrLEDPins[i], HIGH);        
      Serial.println("Short for loop array LED value: " + String(_intArrLEDPins[i]) + " on.");
    }
    delay(intShorter);      
    for(int i = 0; i < _bytLED; i++)
    {
      digitalWrite(_intArrLEDPins[i], LOW);        
      Serial.println("Short for loop array LED value: " + String(_intArrLEDPins[i]) + " off.");
    }      
    delay(intShorter);
    intSigCount++;
  }
  Serial.println("Short while loop complete");
}

/// @brief Turns long signals of all LEDs on, delays then goes off for humans to see.
/// @param bolPowerOn Checks LED High or LOW. 
 void longLEDcode()
 {
   int intLonger = 150;// 150 milliseconds appropriate for licensed radio operators.
   int intSigCount = 0;

   //While Long SOS signal hasn't stopped.
   while(intSigCount < 3)
   {
<<<<<<< HEAD
     Serial.println("Long while loop activated. intSigCount=" + String(intSigCount) + "." ); Serial.println("true");      
     //Turn all LEDs ON.
     for(int i = 0; i < _bytLED; i++)
     {
       digitalWrite(_intArrLEDPins[i], HIGH);        
       Serial.println("Long for loop array LED value: " + String(_intArrLEDPins[i]) + " on.");
     }
     delay(intLonger);      
     //Turn all LEDs off.
     for(int i = 0; i < _bytLED; i++)
     {
       digitalWrite(_intArrLEDPins[i], LOW);        
       Serial.println("Long for loop array LED value: " + String(_intArrLEDPins[i]) + " off.");
     }      
     delay(intLonger);
     intSigCount++;
   }  
   Serial.println("Long while loop complete.");
=======
    Serial.println("if statement activated: " ); Serial.println("true");    
    int intSigCount = 0;
    //While Long SOS signal hasn't stopped.
    while(intSigCount < 3)
    {
      Serial.println("Long while loop activated. intSigCount=" + String(intSigCount) + "." ); Serial.println("true");      
      //Turn all LEDs ON.
      for(int i = 0; i < _intLED; i++)
      {
        digitalWrite(_intArrLEDPins[i], HIGH);        
        Serial.println("Long for loop array LED value: " + String(_intArrLEDPins[i]) + " on.");
      }
      delay(intLonger);      
      //Turn all LEDs off.
      for(int i = 0; i < _intLED; i++)
      {
        digitalWrite(_intArrLEDPins[i], LOW);        
        Serial.println("Long for loop array LED value: " + String(_intArrLEDPins[i]) + " off.");
      }      
      delay(intLonger);
      intSigCount++;
    }
  }
  Serial.println("Long for loop complete.");
>>>>>>> 45dd216 (Add new conversation.)
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
  shortLEDcode();
  delay(_intLongW);
  longLEDcode();
  delay(_intLongW);  
}