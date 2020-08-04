//variables are initialized here.
const int LED1 = 10; 
const int delayTime = 500;

void setup() {
  // setup code is placed here, and run once.
pinMode (LED1, OUTPUT);
}

void loop() {
  // main code is placed here, and run repeatedly.
digitalWrite(LED1, HIGH);
delay(delayTime);
digitalWrite(LED1, LOW);
delay(delayTime);
}
