const int LED1 = 8;
const int LED2 = 9;
const int LED3 = 10;
const int LED4 = 11;
const int LED5 = 12;
const int PINPOT = A0;
int potValue;
int mapValue;

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
  //main code goes here
  potValue = analogRead(PINPOT);
  
  mapValue = map(potValue, 0, 1023, 0, 4); //map values for switch statement below
  
  Serial.println(mapValue); //can see these values in the serial monitor
  
  switch (mapValue) {
    case 0:    //turn on LED1 and off the neighbouring LEDs
      digitalWrite(LED5, LOW);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      break;
    case 1:    //turn on LED2 and off the neighbouring LEDs
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, LOW);
      break;
    case 2:    //turn on LED3 and off the neighbouring LEDs
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, LOW);
      break;
    case 3:    //turn on LED4 and off the neighbouring LEDs
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, HIGH);
      digitalWrite(LED5, LOW);
      break;
     case 4:    //turn on LED5 and off the neighbouring LEDs
      digitalWrite(LED4, LOW);
      digitalWrite(LED5, HIGH);
      digitalWrite(LED1, LOW);
      break;

  }

}
