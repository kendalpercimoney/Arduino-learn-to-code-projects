/*This program is a diagnotic to help determine whether the Bomb circuit has been 
put together correctly. To determine whether the circuit works properly:

- Plug arduino into computer, run this code. 
- Open serial monitor. This criteria needs to be met:
  1. LED should be on
  2. Speaker should beep every ~2 seconds
  3. Values seen in serial monitor should be 0 except the last, which:
  4. changes relative to the amount of light cast onto the photoresitor.
  
*/ //----------------

const int LEDPIN = 9;
const int SPKPIN = 8;
unsigned long previousMillis = 0; 
const long interval = 2000; 

void setup() {
  pinMode(SPKPIN, OUTPUT);
  pinMode(LEDPIN, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int pinFive = digitalRead(5);
  int pinSix = digitalRead(6);
  int pinSeven = digitalRead(7);
  int photoresistor = analogRead(A1);
  
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) { //timer for beep w/ speaker
   
    previousMillis = currentMillis;

    tone(SPKPIN, 1000);
    delay(60);
    noTone(SPKPIN);
    delay(60);
    tone(SPKPIN, 1600);
    delay(60);
    noTone(SPKPIN);
    
   }

  //print code
  Serial.print("Pin 5: (");
  Serial.print(pinFive);
  Serial.print(") || Pin 6: (");
  Serial.print(pinSix);
  Serial.print(") || Pin 7: (");
  Serial.print(pinSeven);
  Serial.print(") || Potentiomter: (");
  Serial.print(photoresistor);
  Serial.println(")");

  digitalWrite(LEDPIN, HIGH);
}
