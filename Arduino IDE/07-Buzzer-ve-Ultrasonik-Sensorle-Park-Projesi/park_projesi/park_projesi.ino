int buzzer_pin = 8;

int tetikleyici = 7;
int algilayici  = 6;

void setup() {
  pinMode(tetikleyici, OUTPUT);
  pinMode(algilayici,  INPUT);

  pinMode(buzzer_pin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(tetikleyici, LOW);
  delayMicroseconds(2);
  digitalWrite(tetikleyici, HIGH);
  delayMicroseconds(10);
  digitalWrite(tetikleyici, LOW);

  int sure = pulseIn(algilayici, HIGH);

  int mesafe = (sure / 2) / 29.1;

  Serial.print(mesafe);
  Serial.println(" cm");

  if(mesafe < 7){
    digitalWrite(buzzer_pin, HIGH);
  }
  else{
    digitalWrite(buzzer_pin, LOW);
  }
  
  delay(100);
}
