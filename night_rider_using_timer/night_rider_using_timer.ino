//variables are initialized here.
const int LED1 = 8; 
const int LED2 = 9; 
const int LED3 = 10;
const int LED4 = 11;
const int LED5 = 12;   
int delayTime = 100; //const
const int pinPot = A0; //
int sensorValue = 0; //
long milliSecond = 0;

void setup() {
pinMode (LED1, OUTPUT);
pinMode (LED2, OUTPUT);
pinMode (LED3, OUTPUT);
pinMode (LED4, OUTPUT);
pinMode (LED5, OUTPUT);
Serial.begin(9600);
pinMode(pinPot, INPUT); //

}

void loop() {
sensorValue = analogRead(pinPot);
delayTime = map(sensorValue, 0, 1023, 0, 755);


digitalWrite(LED1, HIGH);
delay(delayTime);
digitalWrite(LED1, LOW);
digitalWrite(LED2, HIGH);
delay(delayTime);
digitalWrite(LED2, LOW);
digitalWrite(LED3, HIGH);
delay(delayTime);
digitalWrite(LED3, LOW);
digitalWrite(LED4, HIGH);
delay(delayTime);
digitalWrite(LED4, LOW);
digitalWrite(LED5, HIGH);
delay(delayTime);
digitalWrite(LED5, LOW);
digitalWrite(LED4, HIGH);
delay(delayTime);
digitalWrite(LED4, LOW);
digitalWrite(LED3, HIGH);
delay(delayTime);
digitalWrite(LED3, LOW);
digitalWrite(LED2, HIGH);
delay(delayTime);
digitalWrite(LED2, LOW);
milliSecond = millis();
Serial.println(milliSecond);

}
