// functioning servo control code

#include <Servo.h>

Servo left;
Servo right;

void setup()
{
  left.attach(7);
  right.attach(8);
  left.write(90-20); // go counterclockwise full speed
  right.write(90+20); // go clockwise full speed
}

void loop() {

}
