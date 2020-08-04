/* This program beeps the buzzer using our funtion,
 * and counts down the way a bomb would. It will also flatline if
 * timeDelay is smaller than 1. Includes code for LED flash
 */
//initialize variables
const int PINSPK = 9;
const int LED1 = 8;
int timeDelay = 500;

void setup() {
  //setup code
  pinMode(PINSPK, OUTPUT);
  pinMode(LED1, OUTPUT);
}

void loop() {
  if (timeDelay <= 1){ //if timeDelay is less than one, play a tone
    tone(PINSPK, 1000);
    digitalWrite(LED1, HIGH);
  }
  else
  {
  playTone(timeDelay, 1000); // play beep
  timeDelay = timeDelay - 10; //subtract from the delay
  }
}

//this code will beep the buzzer and flash an LED
void playTone(int a,int b) {
  tone(PINSPK, b);
  digitalWrite(LED1, HIGH);
  delay(200);
  noTone(PINSPK);
  digitalWrite(LED1, LOW);
  delay(a);
}
  
