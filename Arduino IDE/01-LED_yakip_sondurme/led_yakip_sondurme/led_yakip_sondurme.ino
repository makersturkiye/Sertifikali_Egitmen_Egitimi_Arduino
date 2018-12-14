/*  Makers Turkiye
 *  Taslak Adı: LED Yakıp Söndürme
 *  Açıklama  : 13. pine bağlı LED'in
 *  1 saniye yakıp söndürmek
 */

void setup() {
  pinMode(13, OUTPUT);    // 13. pini çıkış olarak tanımlama
}   

void loop() {
  digitalWrite(13, HIGH); // LED'i yakma
  delay(1000);            // 1 saniye bekleme
  digitalWrite(13, LOW);  // LED'i söndürme
  delay(1000);            // 1 saniye bekleme
}
