const int LED1 = 10; //only pins with ~ support built-in PWM
const int pinPot = A0;
int sensorValue = 0;
int ledPause;

void setup() {  
  pinMode (LED1, OUTPUT);
  pinMode(pinPot, INPUT);
  Serial.begin(9600);

}

void loop() {
  sensorValue = analogRead(pinPot);
  ledPause = map(sensorValue, 0, 1023, 0, 255); //note 255 max value required for analogWrite
  Serial.println(ledPause);

  //the built-in analogWrite function:
  analogWrite(LED1, ledPause);
  
}
