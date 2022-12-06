
const int LED = 13;     //this is where the speaker is plugged in
const int BUTTON = 2;

int bestRun = 10000; //starting best run score
int score = 0;
int i;

void setup() {
  pinMode(LED, OUTPUT);   //set pin 9 as output
  pinMode(BUTTON, INPUT);   //button is an input
  Serial.begin(9600);
  Serial.println("Press button to begin.");
}

void loop() {
  i = 0;
  int buttonPress = digitalRead(BUTTON); 
  

  digitalWrite(LED, HIGH);
  if(buttonPress == 1){ //if the button is pressed, start code
    
    digitalWrite(LED, LOW);   //turn LED off
    Serial.println("press when LED turns on...");
    delay(random(1000,10000));//wait for a random number between 1 and 10 seconds
    digitalWrite(LED, HIGH);
    buttonPress = digitalRead(BUTTON);
    
    
    while(buttonPress == 0){ //while the button is not being pressed...
      
      score ++;                         //count up!
      Serial.println(score);
      buttonPress = digitalRead(BUTTON); //check to see if the button is being pressed
    
    }
    
    while(i < 5){ //celebrate by flashing 5 times!
      
      digitalWrite(LED, HIGH);
      delay(250);
      digitalWrite(LED, LOW);
      delay(250);
      i++;
      Serial.println(bestRun);
      Serial.println(score);
      
    }
    if(score < bestRun){ //checks high score
      
      bestRun = score; //sets score to best
      Serial.print("Congrats! You got the best score: ");
      Serial.println(bestRun);
      
      Serial.println(" ");
      Serial.println("Press button to play again");
      
    } else {
      
      Serial.print("Sorry, you got: ");
      Serial.println(score);
      Serial.print("The best score is: ");
      Serial.println(bestRun);
      
      Serial.println(" ");
      Serial.println("Press button to play again");
      
    }
       
  } 
         
}
