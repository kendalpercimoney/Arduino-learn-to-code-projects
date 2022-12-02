//This code will display the temperature in Celsius
const int SENSOR=A0; 

float tempC; 
float vOut;

void setup() {
  pinMode(SENSOR,INPUT); //Configuring sensor pin as input
  Serial.begin(9600);
}

void loop() {
  vOut=analogRead(SENSOR); //Read the value from sensor
  Serial.print("Raw Analog = ");
  Serial.println(vOut);
  
  tempC=((vOut*500)/1023); //Convert analog value to Celsius (1023 = 5v)
  
  Serial.print("Degrees C = "); //Print value
  Serial.println(tempC);
  
  delay(500); //Delay of 1 second for ease of viewing 
}
