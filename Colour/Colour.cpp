/*
  Colour.cpp - Library for coloured lights
  Created by Craig Fox
  Released into the public domain
*/

#include "Arduino.h"
#include "Colour.h"

Colour::Colour(int r, int g, int b) {
  red = r;
  green = g;
  blue = b;
}

void Colour::setRed(int r) {
  red = r;
}

void Colour::setGreen(int g) {
  green = g;
}

void Colour::setBlue(int b) {
  blue = b;
}

int Colour::getRed() {
  return red;
}

int Colour::getGreen() {
  return green;
}

int Colour::getBlue() {
  return blue;
}

bool Colour::equals(Colour colour) {
  if (red == colour.getRed() && blue == colour.getBlue() && green == colour.getGreen()) {
    return true;
  }
  else {
    return false;
  }
}
