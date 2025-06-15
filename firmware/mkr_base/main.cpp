#include <Arduino.h>

class StepperMotor
{
private:
    int stepPin;
    int dirPin;
    int enablePin;
    unsigned long prevStepTime;
    int stepDelay;
    bool direction;

public:
    StepperMotor(int stepPin, int dirPin, int enablePin)
    {
        this->stepPin = stepPin;
        this->dirPin = dirPin;
        this->enablePin = enablePin;
        this->prevStepTime = 0;
        this->stepDelay = 1000;
        this->direction = false;

        pinMode(stepPin, OUTPUT);
        pinMode(dirPin, OUTPUT);
        pinMode(enablePin, OUTPUT);

        digitalWrite(enablePin, LOW);
        digitalWrite(dirPin, direction);
    }

    void setSpeed(int speed)
    {
        stepDelay = speed;
    }

    void setDirection(bool direction)
    {
        this->direction = direction;
        digitalWrite(dirPin, direction);
    }

    void step()
    {
        unsigned long currentTime = micros();
        if (currentTime - prevStepTime >= stepDelay)
        {
            prevStepTime = currentTime;
            digitalWrite(stepPin, HIGH);
            delayMicroseconds(10);
            digitalWrite(stepPin, LOW);
        }
    }
};

// stepPin, dirPin, enablePin
StepperMotor motor1(A0, A1, 38); // X-Axis -> J0
StepperMotor motor2(A6, A7, A2); // Y-Axis -> J1
// J1 -> 100 (max with vibrations)
StepperMotor motor3(46, 48, A8); // Z-Axis -> J2
StepperMotor motor4(26, 28, 24); // E0-Axis -> J3
StepperMotor motor5(36, 34, 30); // E1-Axis -> J4

void setup()
{
    motor1.setSpeed(200);
    motor1.setDirection(true);
    motor2.setSpeed(300);
    motor2.setDirection(true);
}

void loop()
{
    motor1.step();
}