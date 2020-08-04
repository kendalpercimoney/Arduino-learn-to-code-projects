const int LED1 = 10; //only pins with ~ support analog
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
  ledPause = map(sensorValue, 0, 1023, 0, 255); //must be 255 for analogWrite function
  Serial.println(ledPause);

  analogWrite(LED1, ledPause);
  
  /*digitalWrite(LED1, HIGH);
  delayMicroseconds(ledPause);
  digitalWrite(LED1, LOW);
  delayMicroseconds(1000-ledPause);*/ //can also just be 1000
}
