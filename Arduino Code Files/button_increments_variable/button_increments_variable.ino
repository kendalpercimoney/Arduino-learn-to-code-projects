/*this program will read whether a button on pin 2 has been pressed,
print the raw value to the serial monitor, increment a varable,
print that to the monitor, and turn on an led*/

const int buttonPin = 2;
int buttonState = 0;
int variableNumber = 0; //variable we will increment later

int ledPin = 8; //initialize led variable

void setup() {
  /*here we're setting the baud (speed) to 9600.
  make sure the baud of the serial monitor is also 9600*/
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  
  pinMode(ledPin, OUTPUT);           //set led to output
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  

  //print buttonState to serial monitor with a loop delay of 50ms
  Serial.print(buttonState);
  Serial.print('\n'); //creates a new line
  Serial.print(variableNumber);
  Serial.print('\n');
  delay(50);
  
  if (buttonState == 1) {           //turn on led if button state is 1
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    ++variableNumber; //increment variable (add 1 to it)
    
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
 
    if (variableNumber > 0) //subtract until 0 - what happens if you remove this if statement but keep the command?
      --variableNumber; //decrement variable (subtract 1 from it)
  }
 
  
}
