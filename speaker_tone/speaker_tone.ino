/*this program will play a tone at frequency 523
 *through the buzzer connected to pin 9
 */
 
const int PINSPK = 9;     //this is where the buzzer is plugged in

void setup() {
  pinMode(PINSPK, OUTPUT);   //set pin 9 as output
}

void loop() {                          
  tone(PINSPK, 523);  //turn on the buzzer for 500ms
  delay(500);                          
  noTone(PINSPK);     //turn off the buzzer for 500ms
  delay(500);
}

  /*c: 523Hz    | music notes and their respective frequencies |
   *d: 587Hz
   *e: 659Hz
   *f: 698Hz
   *g: 784Hz
   *a: 880Hz
   *b: 988Hz
    */
