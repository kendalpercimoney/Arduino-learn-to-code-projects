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
  //main code:
  potValue = analogRead(PINPOT);
  Serial.println(potValue);
  
  if (potValue >= 200 && potValue <= 400){ //logic begins. notice the two comparesons we are making
    digitalWrite(LED5, LOW); 
    digitalWrite(LED1, HIGH); //turn on LED1 and off the neighbouring LEDs
    digitalWrite(LED2, LOW);
  }
  if (potValue >= 400 && potValue <= 600){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH); //turn on LED2 and off the neighbouring LEDs
    digitalWrite(LED3, LOW);
  }
  if (potValue >= 600 && potValue <= 800){
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH); //turn on LED3 and off the neighbouring LEDs
    digitalWrite(LED4, LOW);
  }
  if (potValue >= 800 && potValue <= 1000){
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, HIGH); //turn on LED4 and off the neighbouring LEDs
    digitalWrite(LED5, LOW);
  }
    if (potValue >= 1000 && potValue <= 1200){
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, HIGH); //turn on LED5 and off the neighbouring LEDs
    digitalWrite(LED1, LOW);
  }

}
