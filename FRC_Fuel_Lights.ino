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
  int redOne = 0;
  int greenOne = 0;
  int blueOne = 0;
  int redTwo = 0;
  int greenTwo = 0;
  int blueTwo = 0;
  int redCurrent = redOne;
  int greenCurrent = greenOne;
  int blueCurrent = blueOne;
  adjustColour(redCurrent, greenCurrent, blueCurrent);
  
  while (redCurrent != redTwo || blueCurrent != blueTwo || greenCurrent != greenTwo) {
    if (redCurrent < redTwo) redCurrent++;
    else if (redCurrent > redTwo) redCurrent--;
    
    if (greenCurrent < greenTwo) greenCurrent++;
    else if (greenCurrent > greenTwo) greenCurrent--;
    
    if (blueCurrent < blueTwo) blueCurrent++;
    else if (blueCurrent > blueTwo) blueCurrent--;

    adjustColour(redCurrent, greenCurrent, blueCurrent);
    delay(FADESPEED);
  }
  delay(WAITTIME);
  while (redCurrent != redOne || blueCurrent != blueOne || greenCurrent != greenOne) {
    if (redCurrent < redOne) redCurrent++;
    else if (redCurrent > redOne) redCurrent--;
    
    if (greenCurrent < greenOne) greenCurrent++;
    else if (greenCurrent > greenOne) greenCurrent--;
    
    if (blueCurrent < blueOne) blueCurrent++;
    else if (blueCurrent > blueOne) blueCurrent--;

    adjustColour(redCurrent, greenCurrent, blueCurrent);
    delay(FADESPEED);
  }
  delay(WAITTIME);
  
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

