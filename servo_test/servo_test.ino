// functioning servo control code

#include <Servo.h>

Servo left;
Servo right;

void setup()
{
  left.attach(10);
  right.attach(9);
  left.write(0); // go counterclockwise full speed
  right.write(180); // go clockwise full speed
}

void loop() {

}
