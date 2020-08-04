const int RESISTOR = A0;
const int RESISTOR2 = A1;
const int LED = 8;

void setup(){
 pinMode(RESISTOR, INPUT);
 pinMode(RESISTOR2, INPUT);
 pinMode(LED, OUTPUT);
 Serial.begin(9600);
}

void loop(){
  int value = analogRead(RESISTOR);
  int value2 = analogRead(RESISTOR2);
  int valueMapped = map (value, 15, 800, 1, 1000);
  
  Serial.print(valueMapped);
  Serial.print(" ");
  Serial.print(value2);
  Serial.println(" ");

  if (valueMapped < 125){
    digitalWrite(LED, HIGH);
  }
  else 
  {
    digitalWrite(LED, LOW);
  }
  
  delay (50);
}
