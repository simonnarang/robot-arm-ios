#include "Servo.h"
#include "vexMotor.h"

int message = 0;     //  This will hold one byte of the serial message

bool forward;
bool backward;
bool up;
bool down;
bool left;
bool right;
bool clawClose;
bool clawOpen;
bool pennyFlipperAwake;
bool pennyFlipperAsleep;

vexMotor base;
vexMotor hip;
vexMotor shoulder;
vexMotor claw;
Servo pennyFlipper;

void setup() {  
  Serial.begin(9600);  //set serial to 9600 baud rate
  
  base.attach(3);
  hip.attach(5);
  shoulder.attach(6);
  claw.attach(9);
  pennyFlipper.attach(10);

  forward = false;
  backward = false;
  up = false;
  down = false;
  left = false;
  right = false;
  clawClose = false;
  clawOpen = false;
  pennyFlipperAwake = false;
  pennyFlipperAsleep = false;
  
  Serial.println("YAY Robot Up and Running");
}

void loop(){
    if (Serial.available() > 0) { //  Check if there is a new message
      message = Serial.read();    //  Put the serial input into the message
      if (message == 'l') {
        if (left == false) {
          left = true;
          }
        if (left == true) {
          left = false;
          }
        }
      if (message == 'r') {
        if (right == false) {
          right = true;
          }
        if (right == true) {
          right = false;
          }
        }
      if (message == 'u') {
        if (up == false) {
          up = true;
          }
        if (up == true) {
          up = false;
          }
        }
      if (down == 'd') {
        if (down == false) {
          down = true;
          }
        if (down == true) {
          down = false;
          }
        }
      if (message == 'f') {
        if (forward == false) {
          forward = true;
          }
        if (forward == true) {
          forward = false;
          }
        }
      if (message == 'b') {
        if (backward == false) {
          backward = true;
          }
        if (backward == true) {
          backward = false;
          }
        }
      if (message == 'a') {
        if (pennyFlipperAwake == false) {
          pennyFlipperAwake = true;
          }
        if (pennyFlipperAwake == true) {
          pennyFlipperAwake = false;
          }
        }
      }
  }

