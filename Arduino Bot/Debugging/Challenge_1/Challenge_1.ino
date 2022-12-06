
const int PINSPK = 3;     //this is where the speaker is plugged in
const int BUTTON = 6;

void setup() {
  pinMode(PINSPK, OUTPUT);   //set pin 9 as output
  pinMode(BUTTON, INPUT);   //button is an input
  Serial.begin(9600);
}

void loop() {
  int buttonPress = digitalRead(BUTTON);
  Serial.println(buttonPress);

  if(buttonPress == 1){
    tone(PINSPK, 523);  //beep
    delay(300);                          
    noTone(PINSPK);     
    delay(300);
    tone(PINSPK, 523);  //beep
    delay(100);                          
    noTone(PINSPK);     
    delay(100);
    tone(PINSPK, 587);  //beep
    delay(400);                          
    noTone(PINSPK);     
    delay(400);
    tone(PINSPK, 698);  //beeep
    delay(400);                          
    noTone(PINSPK);     
    delay(400);
    tone(PINSPK, 659);  //beeep
    delay(400);                          
    noTone(PINSPK);     
    delay(400);
    tone(PINSPK, 697);  //beeep
    delay(400);                          
    noTone(PINSPK);    
  } 
          
 
}

  /*c: 523Hz    | music notes and their respective frequencies |
   *d: 587Hz
   *e: 659Hz
   *f: 698Hz
   *g: 784Hz
   *a: 880Hz
   *b: 988Hz
    */
