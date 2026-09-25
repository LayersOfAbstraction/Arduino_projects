void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("setup() called");
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  /*HOME WORK
   * Control red, green & blue LEDs 
   * Blink red LED 5 times from pin 2.
   * Blink green LED 10 times from pin 3.
   * Blink yellow LED 15 times from pin 2.
   */
    Serial.println("loop(red)");  
    //RED
    for (int i = 5; i >= 1; i--)
    { 
      Serial.println(i);
      digitalWrite(2,HIGH);
      delay(550);
      digitalWrite(2,LOW);
      delay(550);
    }

    Serial.println("loop(green)");
    //Green
    for (int i = 10; i >= 1; i--)
    {
      Serial.println(i);
      digitalWrite(3,HIGH);
      delay(550);
      digitalWrite(3,LOW);
      delay(550);        
    }
        Serial.println("loop(yellow)");
    //Yellow
    for (int i = 15; i >= 1; i--)
    {
      Serial.println(i);
      digitalWrite(4,HIGH);
      delay(550);
      digitalWrite(4,LOW);
      delay(550);        
    }
}
