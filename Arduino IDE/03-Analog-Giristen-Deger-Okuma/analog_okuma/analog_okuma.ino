void setup() {
  // Seri haberleşme için baudrate hızı belirlendi
  Serial.begin(9600);

}

void loop() {
  // Yeni bir veri adında değişken oluşturulup
  // bu değişken A0 pinin analog okunan değere eşitlendi
  int veri = analogRead(A0);

  // Okunan analog değerler ekrana yazıldı
  Serial.println(veri);
}
