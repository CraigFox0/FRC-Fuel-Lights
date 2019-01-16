#define REDPIN 5
#define GREENPIN 6
#define BLUEPIN 3
 
#define FADESPEED 15
#define WAITTIME 1000
 
void setup() {
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
}
 
 
void loop() {
  int i = 0;
  while(i < 256) {
    adjustColour(i, 0, 255-i);
    delay(FADESPEED);
    i+=5;
  }
  delay(WAITTIME);
  i = 255;
  while (i >= 0) {
    adjustColour(i, 0, 255-i);
    delay(FADESPEED);
    i-=5;
  }
  delay(WAITTIME);
}

void adjustColour(int r, int g, int b){
  analogWrite(REDPIN, r);
  analogWrite(GREENPIN, g);
  analogWrite(BLUEPIN, b);
}

