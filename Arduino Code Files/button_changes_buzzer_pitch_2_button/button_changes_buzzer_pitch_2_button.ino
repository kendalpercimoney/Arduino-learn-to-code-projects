/* this program is an extention of the beep_with_functions program.
 * in this program, we will add some logic and a button so that pressing
 * the button will both play a tone from our playTone function, and
 * change the pitch of the tone*/
//-------------------------------------------------
//initialize variables
const int PINSPK = 9;
const int BUTTONPIN = 2;
const int BUTTONPIN2 = 3;
int buttonState = 0;
int button2State = 0;
int toneFreq = 523; //initial frequency played by the buzzer

void setup() {
  //setup code
  pinMode(PINSPK, OUTPUT);
  pinMode(BUTTONPIN, INPUT); //set pin 2 to input
  pinMode(BUTTONPIN2, INPUT);
}

void loop() {
  //our main code goes here
  buttonState = digitalRead(BUTTONPIN); //read the value from pin 2
  button2State = digitalRead(BUTTONPIN2);
  
  if (buttonState == 1) {       //if button1 is pressed
    toneFreq += 64;
    playTone(20, toneFreq);
  }
  if (button2State == 1) {      //if button2 is pressed
    toneFreq -= 64; 
    playTone(20, toneFreq);
  }

}

//our playTone function that we call in the main loop
void playTone(int a,int b) { 
  tone(PINSPK, b);
  delay(a);
  noTone(PINSPK);
  delay(a);
}
  
