#include <Servo.h>

Servo servom;

void setup() {
  servom.attach(6); // servo 6 ya bağlı
}

void loop() {
  int veri = analogRead(A0);

  veri = veri / 6;
  
  servom.write(veri);
  delay(100);

}
