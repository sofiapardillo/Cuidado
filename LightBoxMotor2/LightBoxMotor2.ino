#include <Servo.h>

Servo myServo;

int loc = 0; //servo location

void setup() {
   Serial.begin(9600);
   myServo.attach(9);
}

void loop() {

 //myServo.writeMicroseconds(loc);
    loc = loc + 45;
  delay(5000);
  myServo.write(5); // tell servo to go to position in variable 'loc'
  delay(20);
  
Serial.println (loc);
    Serial.println ("-");
 }

