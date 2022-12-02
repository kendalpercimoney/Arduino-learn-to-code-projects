int LDR = A0;
const int LED = 9;
int LEDOff = 0; //LED state (either off or on)
int lowState = 20; //how dim the LED becomes

void setup() {
  Serial.begin(9600); 
  pinMode(LED, OUTPUT);
}


void loop() { //main loop
  int LDRValue = analogRead(LDR); //read values from the LDR
  Serial.println(LDRValue);       //print them to serial monitor
  
  //logic
  if (LDRValue < 10){ 
    if (LEDOff == 1){   //if the LED is on, dim
        dimLED();       //call dimLED function
      }
    analogWrite(LED, lowState);
    LEDOff = 0; //save LED state in variable
    }
   else if (LDRValue > 2){
    if (LEDOff == 0){       //if the LED is off, brighten
      brightenLED();        //call brightenLED function
    }
    analogWrite(LED, 255);
    LEDOff = 1; //save LED state in variable
    }
}

int dimLED(){ //function for dimming LED
  for(int i=255; i>lowState; i--){
      analogWrite(LED, i);
      delay(5);
  }
}

int brightenLED(){ //function for brightening LED
  for(int i=lowState; i<255; i++){
        analogWrite(LED, i);
        delay(5);
  }
}
