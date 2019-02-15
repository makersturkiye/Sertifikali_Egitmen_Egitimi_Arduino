int red   = 9;
int blue  = 10;
int green = 11;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // Yeşil LED yakıldı
  digitalWrite(red, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(green, LOW);
  delay(1000);

  // Mavi LED yakıldı
  digitalWrite(red, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(green, HIGH);
  delay(1000);

  // Kırmızı LED yakıldı
  digitalWrite(red, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(green, HIGH);
  delay(1000);
  
}
