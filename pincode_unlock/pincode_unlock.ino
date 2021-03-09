//This code will display a green LED when the correct sequence of buttons has been pressed.
//The code programmed below is 3241

int pinPlace = 0; //pincode place value
int numberIncorrect;

int pinCode[] = {3,2, 4, 1}; //pincode by arduino pin number
int pinCodeCheck[] = {1, 1, 1, 1}; //initialize array

void setup() {
  pinMode(8, INPUT_PULLUP); //set up buttons
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  
  pinMode(2, OUTPUT); //set up LEDs
  pinMode(3, OUTPUT);
  
  Serial.begin(9600); //start serial monitor
  
}

void loop() {
  
  while (pinPlace < 4){ //loop four times for each digit
 
    for (int i = 8; i <= 11; i++) { //this loop checks for button presses between pins 8 and 11
      int pinBuRead = digitalRead(i); //read button press
      Serial.println("Read");
      
      if (pinBuRead == 0){ //if button pressed
        digitalWrite(3, HIGH);
        pinCodeCheck[pinPlace] = (i-7); //put value in array (pin nr minus 7 = button nr)
        pinPlace ++;
        Serial.println(pinPlace); //print button info
        Serial.println(i-7);
        
        digitalWrite(3, LOW);
        delay(250); //pause to allow release of button
      }
      
    }
    
   }

  for (int i = 0; i < 4; i++){    //compare pin code with stored array
    Serial.println(pinCodeCheck[i]);
    if (pinCodeCheck[i] != pinCode[i]){
      numberIncorrect = true;     //flag if number incorrect
    }
    delay(50);
  }
   
  if (numberIncorrect == false){ //if the number is correct
    digitalWrite(2, HIGH);       //turn on green LED
  } else {                       //else
    digitalWrite(3, HIGH);       //turn on red LED
  }


}
  
  
