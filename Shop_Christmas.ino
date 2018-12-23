#define REDPIN 5
#define GREENPIN 6
#define BLUEPIN 3
 
#define FADESPEED 1000
 
void setup() {
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
}
 
 
void loop() {
  analogWrite(REDPIN, 255);
  analogWrite(GREENPIN, 0);
  delay(FADESPEED);
  analogWrite(REDPIN, 0);
  analogWrite(GREENPIN, 255);
  delay(FADESPEED);
}
