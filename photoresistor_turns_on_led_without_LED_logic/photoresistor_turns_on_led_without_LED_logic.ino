const int RESISTOR = A0;

void setup(){
 pinMode(RESISTOR, INPUT);
 Serial.begin(9600);
}

void loop(){
  int value = analogRead(RESISTOR);
  int valueMapped = map (value, 15, 800, 1, 1000);
  
  Serial.println(valueMapped);
  
  delay (50);
}
