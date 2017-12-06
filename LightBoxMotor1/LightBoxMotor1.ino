#include <Servo.h>

Servo myServo;

int loc = 0; //servo location

void setup() {
  Serial.begin(9600);
  myServo.attach(9);
}

void loop() {
  for (loc = 0; loc < 45; loc += 1) {
    //goes from 0 to 45 degrees
    myServo.write(45);
    delay(5000); ////stops motor for a few secs
    for (loc = 45; loc < 90; loc += 1) {
      myServo.write(loc);
      //goes from 45 to 90
      delay(15);

    }
  }

}




/*  for (loc = 45; loc < 90; loc += 1) {
   // goes from 45 degrees to 90 degrees
   myServo.write(loc); // tell servo to go to position in variable 'loc'
   delay(15); // waits 15ms for the servo to reach the position
  }
  }
  }

  for (loc = 0; loc < 45; loc += 1) {
  //goes from 0 to 45 degrees
  myServo.write(45);
  delay(5000); ////stops motor for a few secs
  for (loc = 45; loc < 90; loc +=1) {
  //goes from 45 to 90
  delay(15);
  myServo.write(0);
  //delay(15);

  }
  }

  /*
      for (loc = 0; loc < 45; loc += 1) {
  //goes from 0 to 45 degrees
  myServo.write(45);
  delay(8000); ////stops motor for 8 seconds
  for (loc = 45; loc < 90; loc += 1) {
   // goes from 45 degrees to 90 degrees
   myServo.write(loc); // tell servo to go to position in variable 'loc'
   delay(15); // waits 15ms for the servo to reach the position
  }

**/
