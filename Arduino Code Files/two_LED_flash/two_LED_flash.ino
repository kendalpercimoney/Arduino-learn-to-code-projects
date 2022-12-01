const int LED1 = 10;
const int LED2 = 8;
const int delayTime = 500;


void setup() {
  // put your setup code here, to run once:
pinMode (LED1, OUTPUT);
pinMode (LED2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED1, HIGH);
digitalWrite(LED2, HIGH);
delay(delayTime);
digitalWrite(LED1, LOW);
digitalWrite(LED2, LOW);
delay(delayTime);

}
