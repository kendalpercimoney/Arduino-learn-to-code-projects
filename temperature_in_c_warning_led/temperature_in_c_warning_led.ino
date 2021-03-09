//This code will display the temperature in Celsius
const int SENSOR = A0; 
const int LED1 = 8;

float tempC; 
float vOut;

void setup() {
  pinMode(SENSOR, INPUT); //Configuring sensor pin as input
  pinMode(LED1, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  vOut=analogRead(SENSOR); //Reading the value from sensor
  tempC=((vOut*500)/1023); //Convert analog value to Celsius (1023 = 5v)
  
  Serial.print("Degrees C = "); //Print value
  Serial.println(tempC);

  if(tempC >= 28){
    digitalWrite(LED1, HIGH);
  } else {
    digitalWrite(LED1, LOW);
  }
  
  delay(500); //Delay of 1 second for ease of viewing 
}
