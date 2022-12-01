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
  //main code:
  ToggleLedHigh(LED1, 500); //turn on LED1 for 500ms
  ToggleLedLow(LED1, 500); //turn off LED1 for 500ms
}


//-------------------------------------------------
//function to turn LED on
void ToggleLedHigh(int lednumber, int delayvalue)
{
  digitalWrite(lednumber, HIGH);
  delay(delayvalue);
}

//function to turn LED off
void ToggleLedLow(int lednumber, int delayvalue)
{
  digitalWrite(lednumber, LOW);
  delay(delayvalue); 
}

  
