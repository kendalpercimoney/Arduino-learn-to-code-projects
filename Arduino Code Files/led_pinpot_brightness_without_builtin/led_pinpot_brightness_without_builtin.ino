//initialize varaibles:
const int LED1 = 10;
const int pinPot = A0;

int sensorValue = 0;
int ledPause;
int maxValue = 3000; //must be 255 for analogWrite function in next project
int ledOffPause;

void setup() {
  //set pinmodes
  pinMode (LED1, OUTPUT);
  pinMode(pinPot, INPUT);
}

void loop() {
  sensorValue = analogRead(pinPot); //read from pot
  ledPause = map(sensorValue, 0, 1023, 0, maxValue); //map values

  ledOffPause = (maxValue - ledPause); //math makes the two pauses inversely related
  
  //flash LED
  digitalWrite(LED1, HIGH);
  delayMicroseconds(ledPause); //note: the 'delay' function we used previously used the unit milliseconds
  digitalWrite(LED1, LOW);
  delayMicroseconds(ledOffPause); //the sum of the two pauses should always equal 'maxValue'
}
