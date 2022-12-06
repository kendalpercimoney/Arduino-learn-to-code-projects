
//set up variables
const int LED1 = 8; 
const int LED2 = 9;
const int LED3 = 10;
const int LED4 = 3;
const int LED5 = 2;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

void loop() {                          
  digitalWrite(LED1, HIGH);
  delay(1000);
}
