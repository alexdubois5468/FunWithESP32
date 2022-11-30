#include <Arduino.h>

#define RLED 16

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);//Set the baudrate to 115200,same as the software settings
  pinMode(RLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  uint32_t f = esp_get_cpu_freq_mhz();
  Serial.println(f); // Print CPU Freq on the serial
  digitalWrite(RLED, HIGH);
  delay(2500);// Delay 2.5 second
  digitalWrite(RLED, LOW);
  delay(2500);// Delay 2.5 second
}