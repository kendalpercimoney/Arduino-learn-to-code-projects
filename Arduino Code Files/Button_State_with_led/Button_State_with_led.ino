/*this program will read whether a button on pin 2 has been pressed,
print the raw value to the serial monitor, and turn on an led*/
//-------------------------------------------------------------
const int buttonPin = 2;
int buttonState = 0;
int ledPin = 8; //initialize led variable

void setup() {
  Serial.begin(9600); //setting the baud (speed) to 9600
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);           //set pin 8 to mode 'output'
  
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  //print buttonState to serial monitor with a loop delay of 50ms
  Serial.print(buttonState);
  delay(50);

  //turn on led if button state is 1:
  if (buttonState == 1) {    
    digitalWrite(ledPin, HIGH);    //turn LED on
  }
  else {
    digitalWrite(ledPin, LOW);     //turn LED off
  }
  
}
