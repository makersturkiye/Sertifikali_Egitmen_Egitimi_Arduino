int red   = 9;
int blue  = 10;
int green = 11;

int veri = 0;


void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {

   analogWrite(red, 255);
   analogWrite(blue, veri);
   analogWrite(green, 255);
   delay(5);

   analogWrite(red, 0);
   analogWrite(blue, veri);
   analogWrite(green, 255- veri);
   delay(5);


   analogWrite(red, 255-veri);
   analogWrite(blue, veri);
   analogWrite(green, 0);
   delay(5);
   veri++;
    


  
}
