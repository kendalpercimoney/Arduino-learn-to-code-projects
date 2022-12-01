
 
const int PINSPK = 3;     //this is where the buzzer is plugged in

void setup() {
  pinMode(PINSPK, OUTPUT);   //set pin 9 as output
}

void loop() {                          
  tone(PINSPK, 523);  //beep
  delay(100);                          
  noTone(PINSPK);     
  delay(100);
  tone(PINSPK, 523);  //beep
  delay(100);                          
  noTone(PINSPK);     
  delay(100);
  tone(PINSPK, 523);  //beep
  delay(100);                          
  noTone(PINSPK);     
  delay(300);
  tone(PINSPK, 523);  //beeep
  delay(300);                          
  noTone(PINSPK);     
  delay(300);
  tone(PINSPK, 523);  //beeep
  delay(300);                          
  noTone(PINSPK);     
  delay(300);
  tone(PINSPK, 523);  //beeep
  delay(300);                          
  noTone(PINSPK);     
  delay(300);
  tone(PINSPK, 523);  //beep
  delay(100);                          
  noTone(PINSPK);     
  delay(100);
  tone(PINSPK, 523);  //beep
  delay(100);                          
  noTone(PINSPK);     
  delay(100);
  tone(PINSPK, 523);  //beep
  delay(100);                          
  noTone(PINSPK);     
  delay(700);
}

  /*c: 523Hz    | music notes and their respective frequencies |
   *d: 587Hz
   *e: 659Hz
   *f: 698Hz
   *g: 784Hz
   *a: 880Hz
   *b: 988Hz
    */
