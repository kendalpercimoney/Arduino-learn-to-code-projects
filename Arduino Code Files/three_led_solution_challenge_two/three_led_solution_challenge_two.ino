//variables are initialized here.
const int LEDRed = 8; 
const int LEDGreen = 9; 
const int LEDBlue = 10; 
const int delayTime = 20;
const int kPinPot = A1;
int sensorValue;
float ledSpeed = 1;
long lastTime = 0;

void setup() {
  // setup code is placed here, and run once.
pinMode (LEDRed, OUTPUT);
pinMode (LEDGreen, OUTPUT);
pinMode (LEDBlue, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // main code is placed here, and run repeatedly.

sensorValue = analogRead(kPinPot);

Serial.print("value is: ");
Serial.print(sensorValue);
ledSpeed = map(sensorValue, 0, 1023, 1, 500);
Serial.print("\n");
Serial.print(ledSpeed);
Serial.print(" ");

digitalWrite(LEDGreen, HIGH);
delay(ledSpeed);
digitalWrite(LEDRed, LOW);
delay(ledSpeed);
digitalWrite(LEDBlue, HIGH);
delay(ledSpeed);
digitalWrite(LEDGreen, LOW);
delay(ledSpeed);
digitalWrite(LEDRed, HIGH);
delay(ledSpeed);
digitalWrite(LEDBlue, LOW);
delay(ledSpeed);
}
