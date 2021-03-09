const int BU1 = 2;
const int BU2 = 3;
const int LED1 = 8;
const int LED2 = 9;

int playerOneWinner = false;
int playerTwoWinner = false;

void setup() {
  pinMode(BU1, INPUT_PULLUP); //set up buttons
  pinMode(BU2, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonOneValue = digitalRead(BU1);
  int buttonTwoValue = digitalRead(BU2);
  
  while(playerOneWinner == true){
    digitalWrite(LED1, HIGH);
    delay(120);
    digitalWrite(LED1, LOW);
    delay(120);
  }
  while(playerTwoWinner == true){
    digitalWrite(LED2, HIGH);
    delay(120);
    digitalWrite(LED2, LOW);
    delay(120);
  }
  
  if (buttonOneValue == 0){
    playerOneWinner = true;
  }
  if (buttonTwoValue == 0){
    playerTwoWinner = true;
  }
  Serial.println("loop");

  


}
