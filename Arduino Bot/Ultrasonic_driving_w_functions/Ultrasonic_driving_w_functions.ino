// This program drives the robot forward until an object is detected
#include <Servo.h>
Servo rightwheel;
Servo leftwheel;

// define variables
  const int trigPin = 12;
  const int echoPin = 11;
  long duration;
  int distance;
  int distanceFromFunction;
  int a;
  
void setup() {
  pinMode(trigPin, OUTPUT); // Sets trigPin as an Output
  pinMode(echoPin, INPUT); // Sets echoPin as an Input
  Serial.begin(9600); // Starts communication to the serial monitor
  
  rightwheel.attach(8); //attaches the servo on pin 9 
  leftwheel.attach(9);
  
  rightwheel.write(90); //stop motors
  leftwheel.write(90);
  }

int checkUltrasonicDistance(){
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
  

  return distance;
}

void turnRight(int a){
  rightwheel.write(90); //turn right
  leftwheel.write(110); 
  delay(a);
}

void stopMotors(int a){
  rightwheel.write(90); 
  leftwheel.write(90);
  delay(a);
}

void driveForwardInfinite(){
  rightwheel.write(70); 
  leftwheel.write(110);
}

// The above code checks distance using the ultrasonic sensor

void loop() {
  distanceFromFunction = checkUltrasonicDistance();
  
  Serial.print("Distance: "); 
  Serial.println(distanceFromFunction);


//driving code -------------------------
     
    driveForwardInfinite(); //drive forward

    while (true){ //create a loop to check distance
      distanceFromFunction = checkUltrasonicDistance(); //call the ultrasonic check function
      Serial.print("Distance: "); 
      Serial.println(distanceFromFunction);

      if (distanceFromFunction < 20){ //if the distance is less than 20, break out of this loop
        break;
      }
    }
    
    stopMotors(2000); // just here to slow things down a bit

    turnRight(2000); //turn right

    driveForwardInfinite();//drive forward again

    while (true){ //create a loop to check distance
      distanceFromFunction = checkUltrasonicDistance(); //call the ultrasonic check function
      Serial.print("Distance: "); 
      Serial.println(distanceFromFunction);

      if (distanceFromFunction < 20){ //if the distance is less than 20, break out of this loop
        break;
      }
    }

    stopMotors(2000); // slow things down a bit again

    turnRight(2000); //turn right

    while (true){
      rightwheel.write(90); //stop motors and "end" program by getting stuck in this loop
      leftwheel.write(90); 
      delay(20);
    }
  
  
//--------------------------------------------------
}
