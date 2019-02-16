int red   = 9;
int blue  = 10;
int green = 11;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  analogWrite(red, 180);
  analogWrite(blue, 0);
  analogWrite(green, 255);
  delay(1000);
  
}
