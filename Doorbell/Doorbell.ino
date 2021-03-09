//challenge - use the hall effect sensor and the LDR as inputs

//initialize variables
const int PINSPK = 9;
const int PINBUTTON = 8;

int pinButtRead; 

void setup() {
  pinMode(PINSPK, OUTPUT);          //set up pin modes
  pinMode(PINBUTTON, INPUT_PULLUP);
  //Serial.begin(9600); //uncomment to see button values
}

void loop() {
  pinButtRead = digitalRead(PINBUTTON); //read value from button, assign to variable
  
  if (pinButtRead == 0){
    tone(PINSPK, 880);  //ding
    delay(500);
    tone(PINSPK, 698);  //dong
    delay(1000);
    noTone(PINSPK);     //stop speaker
    delay(500);
    
    tone(PINSPK, 880);  //repeat
    delay(500);
    tone(PINSPK, 698);
    delay(1000);
    noTone(PINSPK);
    delay(500);
  } 
  //Serial.println(pinButtRead); //uncomment to see button values
}


  /*c: 523Hz    | music notes and their respective frequencies |
    d: 587Hz
    e: 659Hz
    f: 698Hz
    g: 784Hz
    a: 880Hz
    b: 988Hz
    */
