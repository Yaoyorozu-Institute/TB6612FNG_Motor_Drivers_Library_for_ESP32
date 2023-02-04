#ifndef TB6612FNG_MOTORDRIVER.H
#define TB6612FNG_MOTORDRIVER.H

#include <Arduino.h>
#include <stdint.h>

class TB6612FNG_MD
{
  public:
    TB6612FNG_MD(uint8_t pin_pwm, uint8_t pin1, uint8_t pin2, uint8_t channel);
    void setSpeed(int16_t speed);
    
  protected:
    uint8_t _pin_pwm;
    uint8_t _channel;
  	uint8_t _pin1;
    uint8_t _pin2;
};

#endif