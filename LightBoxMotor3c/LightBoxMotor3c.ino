#include <Servo.h>

Servo myServo;

int LEDpin = 10;
int loc = 0;
int locStep = 1;
int locMin = 0;
int locMax = 180;
int smallDelayTime = 100;
int delayTime;
int bigDelayStep = 45;
int bigDelayTime = 5000;

void setup() {
  Serial.begin(9600);
  myServo.attach(9);
  delayTime = smallDelayTime;

}

void loop() {
  analogWrite(LEDpin, 255);
  
  myServo.write(loc);
  delay(delayTime);
  loc = loc + locStep;

  if (loc % bigDelayStep == 0) {
    delayTime = bigDelayTime;
  } else {
    delayTime = smallDelayTime;
  }

  if (loc > locMax) {
    locStep = -locStep;
  }
  if (loc < locMin) {
    locStep = -locStep;
  }
}


