// This program drives the robot forward until an object is detected
#include <Servo.h>
Servo rightwheel;
Servo leftwheel;

// define variables
  const int trigPin = 12;
  const int echoPin = 11;
  long duration;
  int distance;

  int photoResistor = A0;
  
void setup() {
  pinMode(trigPin, OUTPUT); // Sets trigPin as an Output
  pinMode(echoPin, INPUT); // Sets echoPin as an Input
  Serial.begin(9600); // Starts communication to the serial monitor
  
  rightwheel.attach(8); //attaches the servo to pin 9 
  leftwheel.attach(9);
  
  rightwheel.write(90); //stop motors
  leftwheel.write(90);
  distance = 50; //this allows the program to jump into the while loop the first time
  delay(500); //wait before program begins
  }


int ultrasonicCheck(){
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

  return distance;
}

void loop() {
  
  
  while(distance > 20){ //ultrasonic value
  
  ultrasonicCheck();
  
  // Prints values to the Serial Monitor 
  int sensorValue = analogRead(photoResistor);
  Serial.print("LFM: ");
  Serial.println(sensorValue);
  Serial.print("Ultrasonic: "); 
  Serial.println(distance);
 
  
    
    //line following
    if (sensorValue < 50){ 
      rightwheel.write(70); //turn right
      leftwheel.write(90);
      } else {
      rightwheel.write(90); //turn left
      leftwheel.write(110);
      }
    
  }
  
  rightwheel.write(90); //stop motors
  leftwheel.write(90);
   
}
