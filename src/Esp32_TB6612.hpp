#ifndef ESP32_TB6612_hpp
#define ESP32_TB6612_hpp

#include <Arduino.h>

class Motor 
{
  public:
    Motor(int IN1pin, int IN2pin, int PWMpin, int channel, int resolution);

    void drive(int speed);

  private:
    int IN1, IN2, PWM, STBY, _channel, _resolution;
};

#endif