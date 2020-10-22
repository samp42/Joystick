#include <Joystick.h>

//Create joystick
Joystick_ Joystick;

//create axis values
int xAxis = 0;
int yAxis = 0;

const int initAutoSendState = true;

void setup() {
  // put your setup code here, to run once:
  Joystick.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

  //read value
  xAxis = analogRead(A0);
  yAxis = analogRead(A1);

  //map value
  xAxis = map(xAxis, 1023, 255, 0);
  yAxis = map(yAxis, 1023, 255, 0);

  //change values of Joystick
  Joystick.setXAxis(xAxis);
  Joystick.setYAxis(yAxis);

  delay(5);
}
