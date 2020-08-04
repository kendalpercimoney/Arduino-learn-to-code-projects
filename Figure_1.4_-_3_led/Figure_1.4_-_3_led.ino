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
Serial.begin(9600);
}

void loop() {
  // main code is placed here, and run repeatedly.
  flashLedFunction(LED1, 500);
  delay(10000);

}

void flashLedFunction(int x, int y){
  digitalWrite(x, HIGH);
  delay(y);
  digitalWrite(x, LOW);
  Serial.println("this has ended");
  
 
}
