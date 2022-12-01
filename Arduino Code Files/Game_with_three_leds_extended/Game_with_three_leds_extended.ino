const int BU1 = 2;
const int BU2 = 3;
const int LED1 = 8;
const int LED2 = 9;
const int COUNTLED = 11;

bool singleFlash = true;

const long interval = 1000;  //for timer
unsigned long previousMillis = 0; 
int ledState = LOW;
int blinkCounter = 0;



void setup() {
  pinMode(BU1, INPUT_PULLUP); //set up buttons
  pinMode(BU2, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(COUNTLED, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  
  while(singleFlash == true){              //begin by flashing
    
    int buttonOneValue = digitalRead(BU1); //check button presses
    int buttonTwoValue = digitalRead(BU2);
     
    unsigned long currentMillis = millis(); //get the time

    if (currentMillis - previousMillis >= interval) { //if the waiting time is up
      previousMillis = currentMillis; //save current time in variable
    
      // if the LED is off turn it on and vice-versa:
      if (ledState == LOW) {
        ledState = HIGH;
        blinkCounter ++; //counter for three blinks
      } else {
        ledState = LOW;
      }
    
      // set the LED with the ledState of the variable:
      digitalWrite(COUNTLED, ledState); //write to the LED
      
      
    }
    
    if(blinkCounter == 3){    //if the LED has flashed 3 times
        singleFlash = false;  //end loop
    }
    
    if (buttonOneValue == 0){ //check for wrong presses
      player_two_winner();    //other person wins
    }
    if (buttonTwoValue == 0){ //check for wrong presses
      player_one_winner();    //other person wins
    }
  }
  
  //----------------------------------
  int buttonOneValue = digitalRead(BU1); //read button presses for second state
  int buttonTwoValue = digitalRead(BU2);
  
  
  if (buttonOneValue == 0){ //if button is pressed
    player_one_winner();    //run win function
  }
  if (buttonTwoValue == 0){ //if other button is pressed
    player_two_winner();    //run second win function
  }
  //-----------------------------------

}

int player_one_winner(){
  while(true){  //loop repeats forever
    digitalWrite(LED1, HIGH); //flash LED
    delay(120);
    digitalWrite(LED1, LOW);
    delay(120);
  }  
}
int player_two_winner(){
  while(true){  //loop repeats forever
    digitalWrite(LED2, HIGH); //flash LED
    delay(120);
    digitalWrite(LED2, LOW);
    delay(120);
  } 
}
