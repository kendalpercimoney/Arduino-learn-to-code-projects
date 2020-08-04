//initialization of variables
const int LED1 = 9;
const int LED2 = 10;
const int LED3 = 11;

void setup() {
  //set pinmodes to output
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);

}

void loop() {
  //turn LEDs on using PWM (the last value)
  analogWrite(LED1, 255); //255 max value
  analogWrite(LED2, 255);
  analogWrite(LED3, 255);

  delay(20);
}
