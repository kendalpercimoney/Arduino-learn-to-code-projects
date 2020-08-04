/*this program will beep the buzzer using the built-in function.
 */
//initialize variables
const int PINSPK = 9;

void setup() {
  //setup code
  pinMode(PINSPK, OUTPUT);
}

void loop() {
  //main code goes here
  tone(PINSPK, 523); //play tone through pin 9 at frequency 523Hz
  delay(500);   //for this amount of time
  noTone(PINSPK);    //turn the speaker off
  delay(500);   //for this amount of time
}

  /*c: 523Hz    | music notes and their respective frequencies |
   *d: 587Hz
   *e: 659Hz
   *f: 698Hz
   *g: 784Hz
   *a: 880Hz
   *b: 988Hz
    */
