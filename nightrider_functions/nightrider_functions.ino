const int LED1 = 8; 
const int LED2 = 9; 
const int LED3 = 10;
const int LED4 = 11;
const int LED5 = 12;
int ledValue = 8;
int ledLow = 0;

void setup() {
pinMode (LED1, OUTPUT);
pinMode (LED2, OUTPUT);
pinMode (LED3, OUTPUT);
pinMode (LED4, OUTPUT);
pinMode (LED5, OUTPUT);
Serial.begin(9600);
}

void loop() {
  delay(50);
  LedToggle(ledValue);

  Serial.print(ledLow);

 
  
  if (ledLow == 0)
  {
    LedToggle(ledValue);
    ledValue ++;
    Serial.println(ledValue);
  }
  if (ledLow == 1) 
  {
    LedToggleLow(ledValue);
    ledValue --;
    Serial.println(ledValue);
  }
  
  if (ledValue == 13)
  {
    ledLow = 1;
  }
  
  if (ledValue == 7)
  {
     ledLow = 0;
  }
}


void LedToggle(int a)
{
  digitalWrite(a, HIGH);
}

void LedToggleLow(int a)
{
  digitalWrite(a, LOW);
}
  
