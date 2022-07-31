/*
 * The document demonstrates usage of L9110S motor shield with Ti's MSP430 MCU
 */
#include <Motor.h>

//initialize left and right motor
Motor lMotor(35,36);
Motor rMotor(37,38);
Motor lbMotor(34,33);
Motor rbMotor(32,31);
void setup() {
  // move forward
  lMotor.Forward();
  rMotor.Forward();
  lbMotor.Forward();
  rbMotor.Forward();
  delay(1000);
  //move backwards
  lMotor.Bakward();
  rMotor.Bakward();
  lbMotor.Bakward();
  rbMotor.Bakward();
  delay(1000);
  //turn right
  lMotor.Forward();
  rMotor.Bakward();
  lbMotor.Forward();
  rbMotor.Forward();
  delay(1000);
  //turn left
  lMotor.Bakward();
  rMotor.Forward();
  lbMotor.Forward();
  rbMotor.Forward();
  delay(1000);
  lMotor.Stop();
  rMotor.Stop();
  lbMotor.Stop();
  rbMotor.Stop();
}

void loop() {
}
