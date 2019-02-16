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

   veri = random(0, 255); 
   
   analogWrite(red, 0);
   analogWrite(blue, veri);
   analogWrite(green, 0);
   delay(1000);

   veri = random(0, 255); 
   
   analogWrite(red, 0);
   analogWrite(blue, 0);
   analogWrite(green, veri);
   delay(1000);

   veri = random(0, 255); 
   
   analogWrite(red, veri);
   analogWrite(blue, 0);
   analogWrite(green, 0);
   delay(1000);


  
}
