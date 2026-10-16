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
  uint32_t last = millis();
  while (!Serial.available())
  {
    if ((millis() - last) > 10000)
    {
      Serial.println("waiting for serial");
      last = millis();
    }
    delay(100);
  };

  // Read everything from serial
  String s = Serial.readString();
  Serial.print("Read from serial:"); Serial.println(s);
}


void loop() 
{
  for (int i = 0; i < 16; i++)
  {
    int intFirst  = (i >> 0) & 1;
    int intSecond = (i >> 1) & 1;
    int intThird  = (i >> 2) & 1;
    int intForth = (i >> 3) & 1; 


    Serial.println(" Decimal number: " + String(i));
    //Prints the binary repesentation of 4 bits.
    Serial.print(intFirst); Serial.print(" "); Serial.print(intSecond); Serial.print(" "); Serial.print(intThird); Serial.print(" "); Serial.println(intForth); 
    digitalWrite(_intBlue,intFirst); digitalWrite(_intYellow,intSecond); digitalWrite(_intOrange,intThird); digitalWrite(_intGreen,intForth);
    wait_for_serial();
  } 
}
