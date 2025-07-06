/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>

Servo servo1;
Servo servo2;

void setup() {
  servo1.attach(9);   // First servo on pin 9
  servo2.attach(10);  // Second servo on pin 10
}

void loop() {
  for (int angle = 0; angle <= 180; angle++) {
    servo1.write(angle);          // Servo1 moves from 0 to 180
    servo2.write(180 - angle);    // Servo2 moves from 180 to 0 (opposite)
    delay(15);
  }

  for (int angle = 180; angle >= 0; angle--) {
    servo1.write(angle);          // Servo1 back from 180 to 0
    servo2.write(180 - angle);    // Servo2 back from 0 to 180 (again opposite)
    delay(15);
  }
}
