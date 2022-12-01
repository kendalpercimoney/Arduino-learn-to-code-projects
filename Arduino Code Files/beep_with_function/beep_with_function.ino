/* This program is an extention of the speaker_tone program.
 * in this program, we will move the "beep" code into a
 * function, and call that function from the main loop.
 */
//initialize variables
const int PINSPK = 9;

void setup() {
  //setup code
  pinMode(PINSPK, OUTPUT);
}

void loop() {
  /*this code will call the function using 500 and 523 as 'inputs'
    to variables a and b respectively */
  playTone(250, 523);
}

/*this code will beep the buzzer. variables a and b are
'inputs' that will be retrieved from the call function in the main loop*/
void playTone(int a,int b) {
  tone(PINSPK, b);
  delay(a);
  noTone(PINSPK);
  delay(a);
}
  
