const int ledPin =  13; 
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  while (! Serial); // Wait untilSerial is ready - Leonardo
  Serial.println("Enter LED Number 0 to 7 or 'x' to clear");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    digitalWrite(ledPin, HIGH);
  }
    else {
    digitalWrite(ledPin, LOW);
  }
}
