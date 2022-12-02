/*this program will read analog values from the potentiometer
and map the values to a variable used in the delay function*/
//------------------------------------------------
//initialize variables
const int LED1 = 8;  
const int delayTime = 500;
const int pinPot = A0;

void setup() {  
  pinMode (LED1, OUTPUT);
  pinMode(pinPot, INPUT);

}

void loop() {
  int sensorValue = 0;
  int ledPause;

  sensorValue = analogRead(pinPot);
  ledPause = map(sensorValue, 0, 1023, 1, 500);

  //flash LED
  digitalWrite(LED1, HIGH);
  delay(ledPause);          //notice the ledPause variable used here
  digitalWrite(LED1, LOW);
  delay(ledPause);
}
