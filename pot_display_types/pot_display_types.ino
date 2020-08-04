/*this program will read ANALOG values from the potentiometer
and print the mapped values to the serial monitor*/
//------------------------------------------------
const int pinPot = A0;

void setup() {
  pinMode(pinPot, INPUT);
  Serial.begin(9600);

}

void loop() {
  int sensorValue = 0;
  char ledPause;

  sensorValue = analogRead(pinPot); //read data from potentiometer
  ledPause = map(sensorValue, 0, 1023, 0, 255); //map 0 and 1023 to 1 and 255
  
  Serial.println(ledPause); //print to serial monitor
  delay(50);            //delay to reduce data printed to serial monitor
}
