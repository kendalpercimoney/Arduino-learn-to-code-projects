//initialize variables
const int BUTT = 8;
const int LED = 9;

int buttonValue;
int ledState = 0; //LED is off

void setup() {
  pinMode(LED, OUTPUT);  //set pin modes
  pinMode(BUTT, INPUT_PULLUP);
}

void loop() {
   buttonValue = digitalRead(BUTT);        //read value from button
  
   if(buttonValue == 0 && ledState == 0){  //if button is being pressed and the button is off,
      digitalWrite(LED, HIGH);             //turn the light on.
      ledState = 1; //LED is on
      delay(500);   //Wait for hardware to stablize
      
   } else if(buttonValue == 0 && ledState == 1){ //if button is being pressed and the light is on,
      digitalWrite(LED, LOW);                    //turn the light off.
      ledState = 0; //LED is off
      delay(500);   //Wait for hardware to stablize
   }
}
