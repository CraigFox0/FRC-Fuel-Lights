#include <Colour.h>

#define REDPIN 5
#define GREENPIN 6
#define BLUEPIN 3
 
#define FADESPEED 5
#define WAITTIME 2000
 
void setup() {
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
}
 
 
void loop() {
  Colour primaryColour(0, 0, 255);
  Colour secondaryColour(255, 255, 0);
  
  transitionFromColourToColour(primaryColour, secondaryColour);
  transitionFromColourToColour(secondaryColour, primaryColour);
}

void adjustColour(Colour colour){
  analogWrite(REDPIN, colour.getRed());
  analogWrite(GREENPIN, colour.getGreen());
  analogWrite(BLUEPIN, colour.getBlue());
}

void transitionFromColourToColour(Colour startingColour, Colour endingColour) {
  Colour currentColour = startingColour;
  while (!currentColour.equals(endingColour)) {
    if (currentColour.getRed() < endingColour.getRed()) currentColour.setRed(currentColour.getRed()+1);
    else if (currentColour.getRed() > endingColour.getRed()) currentColour.setRed(currentColour.getRed()-1);
    
    if (currentColour.getGreen() < endingColour.getGreen()) currentColour.setGreen(currentColour.getGreen()+1);
    else if (currentColour.getGreen() > endingColour.getGreen()) currentColour.setGreen(currentColour.getGreen()-1);
    
    if (currentColour.getBlue() < endingColour.getBlue()) currentColour.setBlue(currentColour.getBlue()+1);
    else if (currentColour.getBlue() > endingColour.getBlue()) currentColour.setBlue(currentColour.getBlue()-1);

    adjustColour(currentColour);
    delay(FADESPEED);
  }
  delay(WAITTIME);
}
