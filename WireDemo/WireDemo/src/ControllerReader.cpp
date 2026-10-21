#include <Arduino.h>
#include <Wire.h>
// put function declarations here:
void setup() {
  Serial.begin(115200);
  Serial.println(__FILE__);
  Serial.flush();

  // put your setup code here, to run once:
  Wire.begin(); // join i2c bus ( address optional for master )
  //Serial.begin(9600); // star serial for output
}

void loop() {
  Serial.print("r");
  Wire.requestFrom(8, 6); // put your main code here, to run repeatedly:
  
  while (Wire.available()) { // peripheral may send less than requested
    char c = Wire.read(); // receive a byte as character
    Serial.print(c); // print the character
  }

  delay(500);
}

// put function definitions here:
