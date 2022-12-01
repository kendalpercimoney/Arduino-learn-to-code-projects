/* This program will flash a set of 3 LEDs the way a
 * traffic light would. however, the speed is determined
 * by theposition of a potentiometer. It will also print the values
 * to the serial monitor.
 * --------------------------------------------------
 */
 
//variables are initialized here.
const int LEDRED = 8; 
const int LEDGREEN = 9; 
const int LEDBLUE = 10; 
const int PINPOT = A1;

int delayTime = 20;
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

  sensorValue = analogRead(PINPOT);
  
  Serial.print("value is: ");
  Serial.print(sensorValue);
  ledSpeed = map(sensorValue, 0, 1023, 1, 500);
  Serial.print("\n");
  Serial.print(ledSpeed);
  Serial.print(" ");
  
  digitalWrite(LEDGREEN, HIGH);
  delay(ledSpeed);
  digitalWrite(LEDRED, LOW);
  delay(ledSpeed);
  digitalWrite(LEDBLUE, HIGH);
  delay(ledSpeed);
  digitalWrite(LEDGREEN, LOW);
  delay(ledSpeed);
  digitalWrite(LEDRED, HIGH);
  delay(ledSpeed);
  digitalWrite(LEDBLUE, LOW);
  delay(ledSpeed);
}
