#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//Set the baudrate to 115200,same as the software settings
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello World!");//Print character string“Hello World！”on the serial
  delay(5000);// Delay 5 second
}