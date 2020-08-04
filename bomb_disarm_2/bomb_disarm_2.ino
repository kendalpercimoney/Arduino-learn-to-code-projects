/* This program tells the arduino (bomb) to start counting down. 
 *  When the timer is == 50 (when the LED is flashing quickly), the bomb will explode. 
 *  the aim of this challenge is for the student look through this code to find the right wire to "cut" (pull out). 
 *  Goodluck! */
//-------------------
//variables initialized here:
const int LEDPIN = 9;
const int SPKPIN = 8;
unsigned long previousMillis = 0; 
long interval = 2000; //1500 is 2 mins // 2000 is 3:24
long wait = 200000;


void setup() {
  //set-up code
  pinMode(SPKPIN, OUTPUT);
  pinMode(LEDPIN, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  Serial.begin(9600);

  tone(SPKPIN, 1000); //beep to begin w/ LED
  digitalWrite(LEDPIN, HIGH);
  delay(40);
  digitalWrite(LEDPIN, LOW);
  delay(40);
  noTone(SPKPIN);
}

void loop() {
  //read values from pins and them to variables
  int pinFive = digitalRead(5);
  int pinSix = digitalRead(6);
  int pinSeven = digitalRead(7);
  int photoresistor = analogRead(A1);

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) { //timer for beep w/ speaker
   
    previousMillis = currentMillis;

    //tone(SPKPIN, 1000); //uncomment to play beeping tone
    digitalWrite(LEDPIN, HIGH);
    delay(60);
    digitalWrite(LEDPIN, LOW);
    //noTone(SPKPIN);
    interval = interval - 10;
    
  }
  
  //print to serial monitor
  Serial.print(pinFive);
  Serial.print(" ");
  Serial.print(pinSix);
  Serial.print(" ");
  Serial.print(pinSeven);
  Serial.print(" ");
  Serial.print(photoresistor);
  Serial.println(" "); //println ends line and starts a new one

//logic
  if (pinFive == 1){
   tone(SPKPIN, 1800); //disarm tone with LED
   digitalWrite(LEDPIN, HIGH);
   delay(65);
   digitalWrite(LEDPIN, LOW);
   delay(85);
   tone(SPKPIN, 800); 
   digitalWrite(LEDPIN, HIGH);
   delay(65);
   digitalWrite(LEDPIN, LOW);
   delay(85);
   noTone(SPKPIN);
   delay(wait);
  }
  else if (pinSix == 1){ //bomb explodes
   tone(SPKPIN, 100); 
   tone(SPKPIN, 1000);
   digitalWrite(LEDPIN, HIGH);
   delay(wait); 
  }
  else if (pinSeven == 1){
   tone(SPKPIN, 100); 
   tone(SPKPIN, 1000);
   digitalWrite(LEDPIN, HIGH);
   delay(wait);
  }
  else if (photoresistor == 0){
   tone(SPKPIN, 100); 
   tone(SPKPIN, 1000);
   digitalWrite(LEDPIN, HIGH);
   delay(wait);
  }
  else if (interval == 50){ //bomb explodes when timer value is 50
       tone(SPKPIN, 1000);
       digitalWrite(LEDPIN, HIGH);
       delay(wait);
    }
}
