//Line following basic code
#include <Servo.h> //Load servo library
int photoResistor = A0;

//Srart servo objects
Servo rightwheel;
Servo leftwheel;

void setup() {
  Serial.begin(9600); 
 
  rightwheel.attach(8); //attach right servo to pin 8
  leftwheel.attach(9); //attach left servo to pin 9
  
  rightwheel.write(90); //stop motors
  leftwheel.write(90);
  delay(500); //wait before program begins
}

void loop() {
  int sensorValue = analogRead(photoResistor);
  Serial.println(sensorValue);
  
  //logic
  if (sensorValue < 15){ 
    rightwheel.write(85); //turn right
    leftwheel.write(97);
    } else {
    rightwheel.write(80); //turn left
    leftwheel.write(90);
    }
  
}
