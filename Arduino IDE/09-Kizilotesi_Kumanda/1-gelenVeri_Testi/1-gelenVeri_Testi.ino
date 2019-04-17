#include <IRremote.h>

int kumanda_pin = 9;

IRrecv kumanda(kumanda_pin);

decode_results veri;

void setup()
{
  Serial.begin(9600);
  kumanda.enableIRIn(); 
}

void loop() {
  if (kumanda.decode(&veri)) {
    Serial.print("Gelen Veri: ");
    Serial.println(veri.value, HEX);
    kumanda.resume(); 
  }
  delay(100);
}
