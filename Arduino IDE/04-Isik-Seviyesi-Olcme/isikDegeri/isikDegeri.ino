// Esik degeri belirleme
int esikDegeri = 100;

// LED'in bağlı olduğu pin numarası
int led_pin = 10;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // isikDegeri adında bir değişken oluşturduk
  // Analog okuma yapıp bu değişkene atadık
  int isikDegeri = analogRead(A0);

  // Ekrana okunan analog degeri yazdırıyoruz
  Serial.println(isikDegeri);

  // Eger esik degerinden büyükse led yansın
  if(deger > esikDegeri){
     digitalWrite(led_pin, HIGH);     
  }
  // eger esik degerinden küçükse led sönsün.
  else{
    digitalWrite(led_pin, LOW);
  }
}
