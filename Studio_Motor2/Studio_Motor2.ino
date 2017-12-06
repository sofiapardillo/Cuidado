#include <Servo.h>
//const int Pin1 = A0;
int State1 = 0;

Servo myServo;

int loc = 0; //servo location

void setup() {
  Serial.begin(9600);
   myServo.attach(9);
}

void loop() {
  
 for (loc = 0; loc <= 20; loc += 1) { 
    myServo.write(loc);              
    delay(random(15,400));                    
  }
  for (loc = 20; loc <= 45; loc += 1) { 
    myServo.write(loc);              
    delay(15);                    
  }
  for (loc = 45; loc >= 20; loc -= 1) { 
    myServo.write(loc);            
    delay(random(15,400));                     
  }
  for (loc = 20; loc >= 0; loc -= 1) { 
    myServo.write(loc);            
    delay(25);                     
  }

   }
