const int LED1 = 9;
const int LED2 = 10;
const int LED3 = 11;
int brightness = 500;

int rB = 255;
int gB = 0;
int bB = 0; 

int counter = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 delay(1);
 //analogWrite(LED1, 1000);
 //analogWrite(LED2, 1000);
 //analogWrite(LED3, 1000);
 if (gB == 255){
      counter = 1;
 } else if (bB == 255){
      counter = 2;
 } else if (rB == 255){
      counter = 0;
      }


 
  /*  Serial.print(rB);
    Serial.print(" ");
    Serial.print(gB);
    Serial.print(" ");
    Serial.print(bB);
    Serial.println(" ");*/

 
 switch (counter) {
  case 0:
    analogWrite(LED1, rB);
    analogWrite(LED2, gB);
    rB = rB - 1;
    gB = gB + 1;
    break;   
 
  case 1: 
    analogWrite(LED2, gB);
    analogWrite(LED3, bB);
    gB = gB - 1;
    bB = bB + 1;
    break;

  case 2: 
    analogWrite(LED3, bB);
    analogWrite(LED1, rB);
    bB = bB - 1;
    rB = rB + 1;
    break;
    
    
 }
 
}
