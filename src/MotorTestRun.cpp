#include <Arduino.h>
#include <Esp32_TB6612.hpp>

#define BIN1 21
#define BIN2 22
#define PWMB 23



#define channel2 1
#define resolution_channel2 10

Motor rightMotor = Motor(BIN1, BIN2, PWMB,  channel2, resolution_channel2);

void setup() {

  Serial.begin(9600);

}

void loop() {

  //PWM for the right motor
  for(int i=0; i<pow(2, resolution_channel2); i++) {
    rightMotor.drive(i);
    Serial.println(i);
    delay(10);
  }

  for(int j = 1023; j > - 1023; j--) {
    rightMotor.drive(j);
    Serial.println(j);
    delay(10);
  }

  for(int k = -1023; k < 0; k++) {
    rightMotor.drive(k);
    Serial.println(k);
    delay(10);
  }



}