#include "Servo.h"
#include "vexMotor.h"

int message = 0;     //  This will hold one byte of the serial message

vexMotor base;

void setup() {  
  Serial.begin(9600);  //set serial to 9600 baud rate
  base.attach(3);
}

void loop(){
    if (Serial.available() > 0) { //  Check if there is a new message
      message = Serial.read();    //  Put the serial input into the message
      if (message == 'l') {
        base.write(-100);
        }
      if (message == 'r') {
        base.write(100);
        }
      }
}

