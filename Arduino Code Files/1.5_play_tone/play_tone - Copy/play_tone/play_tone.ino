/*this program is an extention of the speaker_tone program.
  in this program, we will move the "beep" code into a
  function, and call that function from the main loop.*/
//-------------------------------------------------
//initialize variables
const int PINSPK = 9;
const int BUTTONPIN = 2;
int buttonState = 0;
int toneFreq = 523;

void setup() {
  //setup code
  pinMode(PINSPK, OUTPUT);
  pinMode(BUTTONPIN, INPUT); 
}

void loop() {
  /*this code will call the function using 500 and 523 as 'inputs'
    to variables a and b respectively */
    buttonState = digitalRead(BUTTONPIN);
  if (buttonState == 1) {
   playTone(250, toneFreq);
   toneFreq += 64;
  }

}

/*this code will beep the buzzer. variables a and b are
'inputs' that will be retrieved from the call function in the main loop*/
void playTone(int a,int b) {
  tone(PINSPK, b);
  delay(a);
  
  noTone(PINSPK);
  delay(a);
}
  
