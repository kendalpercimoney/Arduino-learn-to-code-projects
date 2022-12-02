//initialize variables
const int LEDPIN = 9;
const int SPKPIN = 8;

void setup() {
  //set-up code
  pinMode(SPKPIN, OUTPUT);
  pinMode(LEDPIN, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  //read values from pins and them to variables
  int pinFive = digitalRead(5);
  int pinSix = digitalRead(6);
  int pinSeven = digitalRead(7);
  int photoresistor = analogRead(A1);
  
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
   tone(SPKPIN, 100); //bomb explodes
   tone(SPKPIN, 1000);
   digitalWrite(LEDPIN, HIGH);
  }
  else if (pinSix == 1){
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
   delay(7000);
   
  }
  else if (pinSeven == 1){
   tone(SPKPIN, 100); 
   tone(SPKPIN, 1000);
   digitalWrite(LEDPIN, HIGH);
  }
  else if (photoresistor == 0){
   tone(SPKPIN, 100); 
   tone(SPKPIN, 1000);
   digitalWrite(LEDPIN, HIGH);
  }
}
