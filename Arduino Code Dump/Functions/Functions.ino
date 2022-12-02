const int LED1 = 8; 
const int LED2 = 9; 
const int LED3 = 10;
const int LED4 = 11;
const int LED5 = 12;

void setup() {
pinMode (LED1, OUTPUT);
pinMode (LED2, OUTPUT);
pinMode (LED3, OUTPUT);
pinMode (LED4, OUTPUT);
pinMode (LED5, OUTPUT);

}

void loop() {
  turnOnLed();
  delay(50);
  turnOffLed();
  delay(50);
}

void turnOnLed()
{
  digitalWrite(LED1, HIGH);
}
  
void turnOffLed()
{
  digitalWrite(LED1, LOW);
}
