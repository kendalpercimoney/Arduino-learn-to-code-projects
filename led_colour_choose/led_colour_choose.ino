const int LED1 = 9;
const int LED2 = 10;
const int LED3 = 11;

void setup() {
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED1, 100); //255 max value
  analogWrite(LED2, 100);
  analogWrite(LED3, 100);

  delay(20);
}
