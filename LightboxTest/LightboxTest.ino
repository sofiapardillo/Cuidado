
int randomInt;
int FSR = A0;
int LEDpin = 10;
int preValue = 0;
  
int FSRreading;
int lights;

void setup() {
 Serial.begin(9600);
}

void loop() {
  float in, out;

  FSRreading = analogRead(A0);

while(FSRreading != preValue){
  
Serial.println(FSRreading);
preValue = FSRreading;

   randomInt = random(0.0003, 0.0015);
  Serial.println(randomInt);
  Serial.println(",");


if (FSRreading > 200){
    for (in = 0; in < 6.283; in = in + 0.0008)
  {
    out = sin(in) * 127.5 + 127.5;
    
    analogWrite(LEDpin,out);

  }

  }

else if (FSRreading < 200){
analogWrite(LEDpin, 0);
  }

}
  
}

/*{
if (FSRreading > 100 && randNumber = 1){
  analogWrite(LEDpin, 255);
}

else if (FSRreading > 100 && randNumber = 2){
  analogWrite(LEDpin, 0);
}
 
else if (FSRreading > 500 && randNumber = 3){
  analogWrite(LEDpin, 255);
}
  }
*/
