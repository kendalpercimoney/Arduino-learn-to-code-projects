//this program will play a tone using the piezo buzzer

const int pinSpeaker = 12;

void setup() {
  //set speaker as output:
  pinMode (pinSpeaker, OUTPUT);

}

void loop() {
  // main code is placed here, and run repeatedly:
  
  tone(12, 523);
  delay(500);
  noTone(12);
  delay(500); 
  
  /*c: 523Hz
   *d: 587Hz
   *e: 659Hz
   *f: 698Hz
   *g: 784Hz
   *a: 880Hz
   *b: 988Hz
    */

}
