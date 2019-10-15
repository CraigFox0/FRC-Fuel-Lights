/*
  Colour.h - Library for coloured lights
  Created by Craig Fox
  Released into the public domain
*/
#ifndef Colour_h
#define Colour_h

#include "Arduino.h"

class Colour
{
  public:
    Colour(int r, int g, int b);
    void setRed(int r);
    void setGreen(int g);
    void setBlue(int b);
    int getRed();
    int getGreen();
    int getBlue();
    bool equals(Colour colour);
  private:
    int red;
    int green;
    int blue;
};

#endif
