int LDR = A0;
const int PINSPK = 9;

void setup() {
  Serial.begin(9600); 
  pinMode(PINSPK, OUTPUT);
}

void loop() {
  int LDRValue = analogRead(LDR);
  Serial.println(LDRValue);

  int toneMath = ((LDRValue+100)*10);

  tone(PINSPK, toneMath);
  delay(20);
  
}
