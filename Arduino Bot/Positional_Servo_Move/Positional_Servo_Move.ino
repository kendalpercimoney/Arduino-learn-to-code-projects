#include <Servo.h>
Servo positionalServo;


void setup() {
  positionalServo.attach(9); //attaches the servo on pin 9
}

void loop() {
  positionalServo.write(90); //rotate counterclockwise at slow speed
}
