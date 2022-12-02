/*this program will read whether a button on pin 2 has been pressed,
and print the raw value to the serial monitor*/
//----------------------------------------------------------------
const int buttonPin = 2;
int buttonState = 0;

void setup() {
  /*here we're setting the baud (speed) to 9600.
  make sure the baud of the serial monitor is also 9600*/
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  //print buttonState to serial monitor with a loop delay of 50ms to reduce print speed
  Serial.print(buttonState);
  delay(50);
}
