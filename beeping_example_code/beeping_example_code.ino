const int SPK = 4;


void setup() {
  pinMode(SPK, OUTPUT);
}

void loop() {
  tone(SPK, 988);  //play tone
  delay(100);
  noTone(SPK);     //stop speaker
  delay(100);

}
  
/*c: 523Hz    | music notes and their respective frequencies |
  d: 587Hz
  e: 659Hz
  f: 698Hz
  g: 784Hz
  a: 880Hz
  b: 988Hz
  */
