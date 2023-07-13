#include <Adafruit_MotorShield.h>
#define POS_POLARITY_MOTOR_PIN 3
#define NEG_POLARITY_MOTOR_PIN 4

Adafruit_MotorShield AFMS = Adafruit_MotorShield();
Adafruit_DCMotor *POS_MOTOR = AFMS.getMotor(POS_POLARITY_MOTOR_PIN);
Adafruit_DCMotor *NEG_MOTOR = AFMS.getMotor(NEG_POLARITY_MOTOR_PIN);
void setup() {
  // put your setup code here, to run once:
  POS_MOTOR->setSpeed(0);
  POS_MOTOR->run(RELEASE);

  NEG_MOTOR->setSpeed(0);
  NEG_MOTOR->run(RELEASE);
}

void loop() {
  // put your main code here, to run repeatedly:
  POS_MOTOR->setSpeed(1);
  POS_MOTOR->run(FORWARD);

  NEG_MOTOR->setSpeed(1);
  NEG_MOTOR->run(FORWARD);

}
