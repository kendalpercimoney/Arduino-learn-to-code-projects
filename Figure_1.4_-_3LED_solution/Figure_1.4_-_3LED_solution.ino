//variables are initialized here.
const int LED1 = 8; 
const int LED2 = 9; 
const int LED3 = 10; 
const int delayTime = 500;

void setup() {
  // setup code is placed here, and run once.
pinMode (LED1, OUTPUT);
pinMode (LED2, OUTPUT);
pinMode (LED3, OUTPUT);
}

void loop() {
  // main code is placed here, and run repeatedly.
digitalWrite(LED1, HIGH);
delay(delayTime);
digitalWrite(LED2, HIGH);
delay(delayTime);
digitalWrite(LED3, HIGH);
delay(delayTime);
digitalWrite(LED1, LOW);
delay(delayTime);
digitalWrite(LED2, LOW);
delay(delayTime);
digitalWrite(LED3, LOW);
delay(delayTime);
}
