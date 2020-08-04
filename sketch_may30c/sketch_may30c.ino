const int pinPot = A0;
int sensorValue = A0;

void setup() {
  pinMode(pinPot, INPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(pinPot);
  Serial.println(sensorValue);

  delay(50);
}
