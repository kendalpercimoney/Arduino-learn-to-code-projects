/*this program will read ANALOG values from the potentiometer
and print them to the serial monitor*/
//------------------------------------------------
const int pinPot = A0;

void setup() {  
  pinMode(pinPot, INPUT);
  Serial.begin(9600);

}

void loop() {
  int sensorValue = 0;
  int ledPause;

  sensorValue = analogRead(pinPot); //read data from potentiometer

  Serial.println(sensorValue); //print to serial monitor
  delay(50);            //delay to reduce data printed to serial monitor
}
