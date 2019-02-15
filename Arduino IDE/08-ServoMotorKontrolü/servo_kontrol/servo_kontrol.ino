// Servo motor kütüphanesi eklendi
#include <Servo.h>

// Servo değişkeni tanımlandı
Servo servo_motorum;

void setup() {
  // Servom motorunun pin bağlantısı tanımlandı
  servo_motorum.attach(9);
}

void loop() {
  // Servo motoruna 0 derece dönüş açısı verildi
  servo_motorum.write(0);
  // Servo motorunun dönmesi için süre tanındı
  delay(1000);

  // Servo motoruna 180 derece dönüş açısı verildi.
  servo_motorum.write(180);
  // Servo motorunun dönmesi için süre tanındı
  delay(1000);
}
