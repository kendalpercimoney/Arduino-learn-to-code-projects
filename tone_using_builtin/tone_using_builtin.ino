/*this program will play a tone using the built-in function.
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
}

  /*c: 523Hz    | music notes and their respective frequencies |
   *d: 587Hz
   *e: 659Hz
   *f: 698Hz
   *g: 784Hz
   *a: 880Hz
   *b: 988Hz
    */
