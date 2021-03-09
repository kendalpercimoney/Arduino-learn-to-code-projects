//This is example code to be used in your project

void setup() {
  pinMode(2, OUTPUT); //initialize pins
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);//turn on LEDs connected to pins 2, 4, 6
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(2, LOW);//turn off LEDs connected to pins 2, 4, 6
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  delay(500);
}
