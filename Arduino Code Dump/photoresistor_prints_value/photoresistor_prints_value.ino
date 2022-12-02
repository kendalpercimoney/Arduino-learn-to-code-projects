//initialize variables
const int PRESISTOR = A0;

void setup(){
 pinMode(PRESISTOR, INPUT); //set photoresistor as input
 Serial.begin(9600);
}

void loop(){
  int value = analogRead(PRESISTOR); //read value from A0
  
  //int valueMapped = map (value, [value 1], [value 2], [value 3], [value 4]);
  
  Serial.println(value);

  delay (50); //delay to slow printing to serial monitor
}
