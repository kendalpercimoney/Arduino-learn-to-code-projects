//variables are initialized here.

void setup() {
  // setup code is placed here, and run once.
pinMode (10, OUTPUT);
}

void loop() {
  // main code is placed here, and run repeatedly.
digitalWrite(10, HIGH);
delay(500);
digitalWrite(10, LOW);
delay(500);
}
