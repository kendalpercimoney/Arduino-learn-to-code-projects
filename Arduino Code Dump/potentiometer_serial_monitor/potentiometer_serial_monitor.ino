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
  float voltageInput;
  float voltageValue;

  sensorValue = analogRead(pinPot); //read data from potentiometer
  voltageInput = map(sensorValue, 0, 1023, 0, 500);
  voltageValue = voltageInput/100;

  Serial.println(voltageValue); //print to serial monitor
  delay(50);            //delay to reduce data printed to serial monitor
}
