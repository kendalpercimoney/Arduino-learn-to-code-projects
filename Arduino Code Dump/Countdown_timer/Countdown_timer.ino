//Pressing button 1 will add 5 seconds to a counter. When button 2 is pressed,
//the counter will start. This project prints activity to the serial monitor.

const int LED1 = 2; //initialize variables
const int LED2 = 3;

const int BU1 = 8;
const int BU2 = 9;

long interval = 1000;  //for timer | one second
unsigned long previousMillis = 0; 
int counter = 0;

void setup() {
  pinMode(LED1, OUTPUT); //set up pins
  pinMode(LED2, OUTPUT);
  pinMode(BU1, INPUT_PULLUP);
  pinMode(BU2, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  int buttonOneValue = digitalRead(BU1); //check button presses
  int buttonTwoValue = digitalRead(BU2);
  counter = 0; //reset timer
  digitalWrite(LED2, LOW);

  
  while(buttonTwoValue == 1){
    buttonOneValue = digitalRead(BU1); //check button presses
    buttonTwoValue = digitalRead(BU2);
    
    
    if(buttonOneValue == 0){           //if button is pressed
      counter = (counter + 5);         //add seconds to counter
      Serial.print("Timer: ");
      Serial.print(counter);
      Serial.println(" seconds.");
      digitalWrite(LED1, HIGH);        //flash LED for button press
      delay(250);
      digitalWrite(LED1, LOW);
    }
  }
  
  count_down(counter); //jump to countdown function
  
  digitalWrite(LED1, HIGH); // turn on LED to signify end of countdown
  Serial.println("Timer Complete!");
  
  
}



int count_down(int counter){ //countdown function
  
  while(counter > 0){                     //while the countdown is greater than 0
  unsigned long currentMillis = millis(); //get the time
    if (currentMillis - previousMillis >= interval) { //if interval seconds, do this:
      previousMillis = currentMillis;                 //save current time in variable
      
      counter --;                     //count down one second
      Serial.print(counter);
      Serial.println(" second(s)");
      digitalWrite(LED2, HIGH);      //turn on LED
    }
    
    if (currentMillis - previousMillis >= 200){ //turn off LED for 200 milliseconds
      digitalWrite(LED2, LOW);
    }
  }
}
