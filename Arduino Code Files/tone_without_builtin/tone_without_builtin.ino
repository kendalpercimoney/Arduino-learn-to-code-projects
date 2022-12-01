/*this program will beep the buzzer manually by alternating
 *between high and low in the output to the buzzer
 */
//initialize variables
const int PINSPK = 9;

void setup() {
  //setup code
  pinMode(PINSPK, OUTPUT);
}

void loop() {
  //main code goes here
  digitalWrite(PINSPK, HIGH);   //
  delayMicroseconds(1200);      //
  digitalWrite(PINSPK, LOW);
  delayMicroseconds(1200);
}
