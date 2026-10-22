#include <Arduino.h>
#include <Wire.h>
// put function declarations here:

void requestEvent(); // Delcaration: a prototype tells the compiler this function exists

void setup() {
  Serial.begin(115200);
  Serial.println(__FILE__);
  Serial.flush();

  Wire.begin(8);                // join i2c bus with address #8
  Wire.onRequest(requestEvent); // register event
}

void loop() {
  Serial.print(".");
  delay(5000);
}

// function that executes whenever data is requested by master
// this function is registered as an event, see setup()
void requestEvent() {
  Serial.print("r");
  Wire.write("hello "); // respond with message of 6 bytes
  // as expected by master
}