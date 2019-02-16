// Esik degeri belirleme
int esikDegeri = 100;

int isikDegeri;

// LED'in bağlı olduğu pin numarası
int led_pin = 5;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);

}

void loop() {
  // isikDegeri adında bir değişken oluşturduk
  // Analog okuma yapıp bu değişkene atadık
  isikDegeri = analogRead(A0);

  // Ekrana okunan analog degeri yazdırıyoruz
  Serial.println(isikDegeri);

  // Eger esik degerinden büyükse led yansın
  if(isikDegeri > esikDegeri){
     digitalWrite(led_pin, HIGH);     
  }
  // eger esik degerinden küçükse led sönsün.
  else{
    digitalWrite(led_pin, LOW);
  }
}
