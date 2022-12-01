const int kPinPot = A0;
const int kPinLed = 9;

void setup() {
  pinMode(kPinLed, OUTPUT);
  Serial.begin(9600);
}
long lastTime = 0;
int ledValue = LOW;

void loop() {
  int sensorValue;

  sensorValue = analogRead(kPinPot);
  if(millis() > lastTime + sensorValue){
    if (ledValue == LOW){
      ledValue = HIGH;
    }
    else{
      ledValue = LOW;
    }
    lastTime = millis();
    digitalWrite(kPinLed, ledValue);
    Serial.println(lastTime);
  }

}
