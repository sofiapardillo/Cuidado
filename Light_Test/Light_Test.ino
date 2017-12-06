int LEDpin = 9;


void setup() {
Serial.begin(9600);
}

void loop() {
float in, out;
  
  for (in = 0; in < 6.283; in = in + 0.00025)
  {
    out = sin(in) * 127.5 + 127.5;
    
    analogWrite(LEDpin,out);

  }
}
