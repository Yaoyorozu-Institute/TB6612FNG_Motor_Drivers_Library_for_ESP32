#include <TB6612FNG_MotorDriver.h>

#define Motor_PWM 27
#define IN_1 12
#define IN_2 14
#define CHANNEL 5

TB6612FNG_MD motor(Motor_PWM, IN_1, IN_2, CHANNEL);

void setup(){

}

void loop(){
    motor.Speed(255);
    motor.Speed(0);
    motor.Speed(-255);
}