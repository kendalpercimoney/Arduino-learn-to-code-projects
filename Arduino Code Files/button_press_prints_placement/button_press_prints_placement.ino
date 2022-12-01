//initialize variables
const int BTN1 = 11;
const int BTN2 = 10;
const int BTN3 = 9;
const int BTN4 = 8;

void setup() {
  // put your setup code here, to run once:
   pinMode(BTN1, INPUT_PULLUP);  //note we're not using "input".
   pinMode(BTN2, INPUT_PULLUP);  //Input_Pullup tells the Arduino to set
   pinMode(BTN3, INPUT_PULLUP);  //the value to 1 until the pin is connected
   pinMode(BTN4, INPUT_PULLUP);  //to ground.
   Serial.begin(9600);

}

void loop() {
  delay(50);
  
  /*read values and assign them to variables that
  we're initializing as integers (int)*/
  //when button pressed, the value read will == 0
  int btn1Read = digitalRead(BTN1);
  int btn2Read = digitalRead(BTN3);
  int btn3Read = digitalRead(BTN2);
  int btn4Read = digitalRead(BTN4);

  //logic for displaying button presses
  if (btn1Read == 0)
  {
    Serial.println("Button 1 Pressed");
  }
  else if ([insert variable] == 0)
  {
    Serial.println("Button 2 Pressed");
  }
  else if ([insert variable] == 0)
  {
    Serial.println("Button 3 Pressed");
  }
  else if ([insert variable] == 0)
  {
    Serial.println("Button 4 Pressed");
  }
}
