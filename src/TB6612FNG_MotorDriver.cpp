#include "TB6612FNG_MotorDriver.h"

TB6612FNG_MD::TB6612FNG_MD(uint8_t pin_pwm, uint8_t pin1, uint8_t pin2, uint8_t channel)
{
  _pin_pwm = pin_pwm;
  _channel =channel;
  _pin1 = pin1;
  _pin2 = pin2;
  
  pinMode(_pin_pwm, OUTPUT);
  pinMode(_pin1, OUTPUT);
  pinMode(_pin2, OUTPUT);
  
  ledcSetup(channel, 12800, 8);
  ledcAttachPin(_pin_pwm, channel);

  digitalWrite(_pin1, LOW);
  digitalWrite(_pin2, LOW);
}

void TB6612FNG_MD::setSpeed(int16_t speed)
{
  // Make sure the speed is within the limit.
  if (speed > 255) {
    speed = 255;
  } else if (speed < -255) {
    speed = -255;
  }
  
  // Set the speed and direction.
  if (speed > 0) {
        ledcWrite(_channel,speed);
        digitalWrite(_pin1, HIGH);
        digitalWrite(_pin2, LOW);
      } else if(speed < 0) {
        ledcWrite(_channel,-speed);
        digitalWrite(_pin1, LOW);
        digitalWrite(_pin2, HIGH);
      }
      else{
        analogWrite(_pin_pwm, 0);
        digitalWrite(_pin1, HIGH);
        digitalWrite(_pin2, HIGH);
      }
}
