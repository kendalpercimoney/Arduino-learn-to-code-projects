const int LED1 = 8;
const int LED2 = 9;
const int LED3 = 10;
const int LED4 = 11;
const int LED5 = 12;
const int PINPOT = A0;
int potValue;

void setup() {
  Serial.begin(9600);
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
  pinMode (LED5, OUTPUT);
  pinMode(PINPOT, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(PINPOT);
  Serial.println(potValue);
  
  if (potValue > 200){
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1,LOW);
  }
  if (potValue > 400){
    digitalWrite(LED2, HIGH);
  }
  else
  {
    digitalWrite(LED2,LOW);
  }
  if (potValue > 600){
    digitalWrite(LED3, HIGH);
  }
  else
  {
    digitalWrite(LED3,LOW);
  }
  if (potValue > 800){
    digitalWrite(LED4, HIGH);
  }
  else
  {
    digitalWrite(LED4,LOW);
  }
  if (potValue > 1000){
    digitalWrite(LED5, HIGH);
  }
  else
  {
    digitalWrite(LED5,LOW);
  }

}
