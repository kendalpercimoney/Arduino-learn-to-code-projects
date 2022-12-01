//initialization of variables
const int LED1 = 9;
const int LED2 = 10;
const int LED3 = 11;

int changingValue;

void setup() {
  //set pinmodes to output
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);

}

void loop() {
  //turn LEDs on using PWM (the last value)
  analogWrite(LED1, 0); //255 max value
  analogWrite(LED2, (255-changingValue));
  analogWrite(LED3, changingValue);

  delay(20);
  
  /*logic and math to change value in variable changingValue*/
  changingValue = changingValue + 1; //change value of changingValue up to 255
  
  if (changingValue == 255){
    
    while (changingValue > 0) { //change value of changingValue down to 0
      changingValue = changingValue - 1;
      
       analogWrite(LED1, 0);
       analogWrite(LED2, (255-changingValue));
       analogWrite(LED3, changingValue);
       
       delay(20);
    }
  }
  
}
