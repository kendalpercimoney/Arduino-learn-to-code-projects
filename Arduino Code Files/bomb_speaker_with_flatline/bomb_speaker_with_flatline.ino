/* This program beeps the buzzer using our funtion,
 * and counts down the way a bomb would. It will also flatline if
 * timeDelay is smaller than 1
 */
//initialize variables
const int PINSPK = 9;
int timeDelay = 500;

void setup() {
  //setup code
  pinMode(PINSPK, OUTPUT);
}

void loop() {
  if (timeDelay <= 1){ //if timeDelay is less than one, play a tone
    tone(PINSPK, 1000);
  }
  else
  {
  playTone(timeDelay, 1000); // play beep
  timeDelay = timeDelay - 50; //subtract from the delay
  }
}

//this code will beep the buzzer and is called from the main loop
void playTone(int a,int b) {
  tone(PINSPK, b);
  delay(200);
  noTone(PINSPK);
  delay(a);
}
  
