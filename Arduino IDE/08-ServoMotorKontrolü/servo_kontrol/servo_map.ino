#include <Servo.h>

Servo servom;

void setup() {
  servom.attach(6); // servo 6 ya bağlı
}

void loop() {
  int veri = analogRead(A0);

  int yeniVeri = map(veri, 0, 1023, 180, 0);
  
  servom.write(yeniVeri);
  delay(100);

}
