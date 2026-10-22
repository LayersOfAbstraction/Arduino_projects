#include <Arduino.h>

// put function declarations here:
int orangePin=9;
int bright=255;
void setup() {
  // put your setup code here, to run once:
  pinMode (orangePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(orangePin, bright);
  //STUB: 
  //Dim LED 
  //Delayfor 5 seconds
  //Make LED immediate for 5 seconds
  //Delayfor 5 seconds
  //Brighten LED for 5 seconds 
  //Delayfor 5 seconds
}

// put function definitions here:
