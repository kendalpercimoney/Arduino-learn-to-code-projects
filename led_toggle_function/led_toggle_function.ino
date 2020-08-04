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
  ToggleLedHigh(LED1, 500); //LED1 will be sent to the 'lednumber' variable in the function called
  ToggleLedLow(LED1, 500); //respectively, 500 will be sent to the variable 'delayvalue' 
}

//create functions that we can call in the 'main' code above
void ToggleLedHigh(int lednumber, int delayvalue)
{
  digitalWrite(lednumber, HIGH);
  delay(delayvalue);
}
void ToggleLedLow(int lednumber, int delayvalue)
{
  digitalWrite(lednumber, LOW);
  delay(delayvalue); 
}

  
