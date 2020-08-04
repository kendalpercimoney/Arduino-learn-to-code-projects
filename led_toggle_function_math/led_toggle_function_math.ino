//initialize variables
const int LED1 = 8;
const int LED2 = 9;
const int LED3 = 10;
const int LED4 = 11;
const int LED5 = 12;

int pinNumber = 8;             //we'll use this variable to represent our LED pin
bool pinIncrement = true;      //toggle switch for whether to increment or decrement

void setup() {
  //set LED pin modes
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
  pinMode (LED5, OUTPUT);
}

//------------------- our main code ---------------------

void loop() {
   
  ToggleAllLedLow();                 //turn off LEDs so we can switch on the next LED
  ToggleLedHigh(pinNumber, 100);     //turn on specific LED. We'll be changing pinNumber with the logic below
  
  //----------logic------------
  //increment or decrement led number
  if (pinIncrement == true)
  {
    pinNumber ++;                       //add 1 to the pin number
  } else {
    pinNumber --;                       //subtract 1 from the pin number
  }
  
  //logic for switching between increment and decrement
  if (pinNumber == 12)
  {
    pinIncrement = false;
  }
  if (pinNumber == 8)
  {
    pinIncrement = true;
  }
  
  
} //close the loop

//------------ our functions ------------------

void ToggleLedHigh(int lednumber, int delayvalue)      //turn on LED
{
  digitalWrite(lednumber, HIGH);
  delay(delayvalue);
}

void ToggleLedLow(int lednumber, int delayvalue)      //turn off LED
{
  digitalWrite(lednumber, LOW);
  delay(delayvalue); 
}

void ToggleAllLedLow()                                //turn off all LEDs
{
  ToggleLedLow(LED1, 0);
  ToggleLedLow(LED2, 0);
  ToggleLedLow(LED3, 0);
  ToggleLedLow(LED4, 0);
  ToggleLedLow(LED5, 0);
}

  
