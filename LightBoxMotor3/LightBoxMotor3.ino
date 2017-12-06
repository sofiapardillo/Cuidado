#include <Servo.h>

Servo myServo;

int loc = 0;
int locStep = 1;
int locMin = 0;
int locMax = 180;
int delayTime = 100;

void setup() {
  Serial.begin(9600);
  myServo.attach(9);

}

void loop() {
  myServo.write(loc);
  delay(delayTime);
  loc = loc + locStep;
  if (loc > locMax) {
    locStep = -locStep;
  }
  if (loc < locMin) {
    locStep = -locStep;
  }
}


