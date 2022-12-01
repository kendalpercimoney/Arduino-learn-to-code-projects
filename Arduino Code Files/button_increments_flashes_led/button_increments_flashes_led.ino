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
  pinMode(buttonPin, INPUT);       //set pin 2 to input  
  pinMode(ledPin, OUTPUT);         //set pin 8 to output
}

void loop() {
  // read the state of the button:
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == 1) {          //flash led if button state is 1
    // flash LED:
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);

    variableNumber++;                //increment variable (add 1 to it)
    Serial.println(variableNumber);  //print variable to serial

  }
 
}
