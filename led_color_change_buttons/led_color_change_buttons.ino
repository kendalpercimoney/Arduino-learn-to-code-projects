//initialization of variables
const int LED1 = 9;
const int LED2 = 10;
const int LED3 = 11;

const int BUT1 = 5; //buttons
const int BUT2 = 6;

int brightnessValue = 0;

void setup() {
  //set pinmodes to output
  pinMode (LED1, OUTPUT); //treating the LED as separate LEDs
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);

  pinMode (BUT1, INPUT_PULLUP); 
  pinMode (BUT2, INPUT_PULLUP);
  
  Serial.begin(9600); //open the serial monitor to see the value of brightnessValue

}

void loop() {
  //turn LEDs on using PWM (the last value)
  analogWrite(LED1, 0); //255 max value
  analogWrite(LED2, (255 - brightnessValue)); //inverse of brightnessValue
  analogWrite(LED3, brightnessValue);

  int buttonOne = digitalRead(BUT1); //read values from buttons
  int buttonTwo = digitalRead(BUT2);
  
  Serial.println(brightnessValue);

  //logic to dim LEDs
  if (buttonOne == 0 && brightnessValue <= 254){
    brightnessValue ++;
  }
  else if (buttonTwo == 0 && brightnessValue >= 1){
    brightnessValue --;
  }
  
  
  delay(2);
}
