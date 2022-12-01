const int Speaker = 9;
const int k_timeDelay = 136;

void setup() {
  // put your setup code here, to run once:
pinMode(Speaker, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(Speaker, HIGH);
delayMicroseconds(k_timeDelay);
digitalWrite(Speaker, LOW);
delayMicroseconds(k_timeDelay);



}
