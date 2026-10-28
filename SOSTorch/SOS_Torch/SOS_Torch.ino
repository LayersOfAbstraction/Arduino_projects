//FURTHER READING: https://roboticsbackend.com/arduino-handle-multiple-leds-using-arrays-and-functions/
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

/// @brief Controls long & short signals of all LEDs
/// @param bolPowerOn Checks if LED High or Low. 
void powerOnAllLEDs(bool bolPowerOn)
{
  Serial.println("powerOnAllLEDs(bool bolPowerOn) called.");
  int intShorter = 50;
  int intlonger = 150;
  //SHORT signal
  for (int i = 0; i < _intLED; i++) 
  {
    Serial.println("Short for loop activated.");
    if (bolPowerOn) 
    {
      Serial.println("if statement activated: " ); Serial.println(bolPowerOn);
      digitalWrite(_intArrLEDPins[i], HIGH);
      delay(intShorter);
    }

    else 
    {
      Serial.println("Else statement activated: "); Serial.println(bolPowerOn);
      digitalWrite(_intArrLEDPins[i], LOW);
      delay(intShorter);
    }    
  }
  Serial.println("Short for loop complete.");
  wait_for_serial();

  //LONG signal
  for (int i = 0; i < _intLED; i++) 
  {
    Serial.println("long for loop activated: "); Serial.println(bolPowerOn);

    if (bolPowerOn) 
    {
      Serial.println("if statement activated: "); Serial.println(bolPowerOn);
      digitalWrite(_intArrLEDPins[i], HIGH);
      delay(intlonger);
    }
    
    else 
    {
      Serial.println("Else statement activated: "); Serial.println(bolPowerOn);
      digitalWrite(_intArrLEDPins[i], LOW);
      delay(intlonger);
    }    
  }
  Serial.println("Short for loop complete.");
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