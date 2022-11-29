const int BUTTON = 2;
const int LED = 8;

void setup() {
  pinMode(BUTTON, INPUT_PULLUP); //turn on pull-up resistor
  pinMode(LED, OUTPUT);
}

void loop() {
  if(digitalRead(BUTTON) == LOW){
   digitalWrite(LED, HIGH);
  }
  
}
