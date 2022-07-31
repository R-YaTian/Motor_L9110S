#ifndef Motor_h
#define Motor_h

#include <Arduino.h>  // To get access to the Arduino millis() function

class Motor{
  public:
	int in1;
	int in2;
	Motor(int arg1,int arg2);
	void Forward();
	void Bakward();
	void Stop();
  private:
};
#endif
