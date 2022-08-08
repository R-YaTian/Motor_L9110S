#include "Motor.h"

Motor::Motor(int arg1,int arg2){
    in1=arg1;
    pinMode(in1,OUTPUT);
    in2=arg2;
    pinMode(in2,OUTPUT);
}
void Motor::Forward(){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
}
void Motor::Bakward(){
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
}
void Motor::Stop(){
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
}
