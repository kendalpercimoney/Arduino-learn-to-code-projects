// This program drives the robot forward until an object is detected
#include <Servo.h>
Servo rightwheel;
Servo leftwheel;

// define variables
  const int trigPin = 12;
  const int echoPin = 11;
  long duration;
  int distance;
  
void setup() {
  pinMode(trigPin, OUTPUT); // Sets trigPin as an Output
  pinMode(echoPin, INPUT); // Sets echoPin as an Input
  Serial.begin(9600); // Starts communication to the serial monitor
  
  rightwheel.attach(8); //attaches the servo on pin 9 
  leftwheel.attach(9);
  
  rightwheel.write(90); //stop motors
  leftwheel.write(90);
  }
  
int myReactFunction(){ 
  rightwheel.write(110); //reverse 
  leftwheel.write(70); 
  delay(1000);
  rightwheel.write(75); //turn 
  leftwheel.write(75); 
  delay(1000);
  }


void loop() {
  // Clears the trigPin 
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  
  // Sets the trigPin on HIGH state for 10 microseconds 
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds 
  duration = pulseIn(echoPin, HIGH);
  
  distance= duration*0.034/2; // Calculating the distance
  
  // Prints distance to the Serial Monitor 
  Serial.print("Distance: "); 
  Serial.println(distance);
  
//------------------------- 
  // drive forward 
  rightwheel.write(70); 
  leftwheel.write(110);
  //logic
  if(distance < 20){
  myReactFunction(); }
//------------------------- 
}
