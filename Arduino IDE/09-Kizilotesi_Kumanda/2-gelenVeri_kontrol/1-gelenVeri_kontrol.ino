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
    kumanda.resume();
  }

  switch (veri.value) {
    case 0xFFA25D:
      Serial.println("CH- tusuna basildi");
      break;
    case 0xFF629D:
      Serial.println("CH tusuna basildi");
      break;
    case 0xFFE21D:
      Serial.println("CH+ tusuna basildi");
      break;
    case 0xFF22DD:
      Serial.println("|<< tusuna basildi");
      break;
    case 0xFF02FD:
      Serial.println(">>| tusuna basildi");
      break;
    case 0xFFC23D:
      Serial.println(">|| tusuna basildi");
      break;
    case 0xFFE01F:
      Serial.println("- tusuna basildi");
      break;
    case 0xFFA857:
      Serial.println("+ tusuna basildi");
      break;
    case 0xFF906F:
      Serial.println("EQ tusuna basildi");
      break;
    case 0xFF6897:
      Serial.println("0 tusuna basildi");
      break;
    case 0xFF9867:
      Serial.println("100+ tusuna basildi");
      break;
    case 0xFFB04F:
      Serial.println("200+ tusuna basildi");
      break;
    case 0xFF30CF:
      Serial.println("1 tusuna basildi");
      break;
    case 0xFF18E7:
      Serial.println("2 tusuna basildi");
      break;
    case 0xFF7A85:
      Serial.println("3 tusuna basildi");
      break;
    case 0xFF10EF:
      Serial.println("4 tusuna basildi");
      break;
    case 0xFF38C7:
      Serial.println("5 tusuna basildi");
      break;
    case 0xFF5AA5:
      Serial.println("6 tusuna basildi");
      break;
    case 0xFF42BD:
      Serial.println("7 tusuna basildi");
      break;
    case 0xFF4AB5:
      Serial.println("8 tusuna basildi");
      break;
    case 0xFF52AD:
      Serial.println("9 tusuna basildi");
      break;
  }
  delay(100);
}
