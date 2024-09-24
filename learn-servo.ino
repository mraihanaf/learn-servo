#include <Servo.h>

Servo myservo;

int pos = 0;
int pin = 9;

void setup() {
  myservo.attach(9);
}

void loop() {
  // Servo max angle is 180
  myservo.write(180);
}
