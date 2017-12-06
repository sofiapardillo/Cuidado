int FSR = A0;
int LEDpin = 10;
int FSRreading;

void setup() {
 Serial.begin(9600);
}

void loop() {
FSRreading = analogRead(A0);

Serial.println(FSRreading);
  if (FSRreading > 200){
analogWrite(LEDpin, 255);
  }
  else if (FSRreading < 200){
analogWrite(LEDpin, 0);
  }
  


}
