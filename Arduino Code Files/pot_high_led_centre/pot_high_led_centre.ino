//this program will turn on an LED when the read value from the pot is 512
//initialize variables
const int LED3 = 10;
const int PINPOT = A0;
int potValue;

void setup() {
  Serial.begin(9600);
  pinMode (LED3, OUTPUT);
  pinMode(PINPOT, INPUT);
}

void loop() {
  //main code here
  potValue = analogRead(PINPOT);
  Serial.println(potValue);
  
  if (potValue == 512){  //if value is 512, turn on LED, otherwise turn it off
    digitalWrite(LED3, HIGH); 
  }
    else
  {
    digitalWrite(LED3,LOW);
  }

}
