/*this code will beep the buzzer while incrementing a variable.
  The value of that variable will be printed to the serial monitor*/
//--------------------------------------------------------------
//initialize variables
const int PINSPK = 9;
int beepCounter = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(PINSPK, OUTPUT);
  Serial.begin(9600);
}

void loop() { 
  //--main loop--
  playTone(500, 523); //call buzzer beep
  
  beepCounter ++;     //increment variable (add one to)
  
  Serial.println(beepCounter); //print variable value to serial monitor
  
}

void playTone(int a,int b) { //beep buzzer
  tone(PINSPK, b);
  delay(a);
  noTone(PINSPK);
  delay(a);
}
  
