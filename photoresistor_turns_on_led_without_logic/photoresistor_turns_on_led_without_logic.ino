const int RESISTOR = A0;
const int LED = 8;

void setup(){
 pinMode(RESISTOR, INPUT);
 pinMode(LED, OUTPUT);
 Serial.begin(9600);
}

void loop(){
  int value = analogRead(RESISTOR);
  int valueMapped = map (value, 15, 800, 1, 1000);
  
  Serial.println(valueMapped);

  if (value < 10){
    digitalWrite(LED, HIGH);
  }
  else 
  {
    digitalWrite(LED, LOW);
  }
  
  delay (50);
}
