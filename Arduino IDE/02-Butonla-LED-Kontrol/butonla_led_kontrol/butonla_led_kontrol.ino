/*  Makers Turkiye
 *  Taslak Adı: Butonla LED Kontrolü
 *  Açıklama  : butona basıldıgında ledlerin 
 *  sırayla yanmasını saglayan proje
 */

int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;

int buton = 2;

void setup() {
  pinMode(buton, INPUT);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  if(digitalRead(buton)){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW); 
    digitalWrite(led4, LOW);
    delay(500);

    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW); 
    digitalWrite(led4, LOW);
    delay(500);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH); 
    digitalWrite(led4, LOW);
    delay(500);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW); 
    digitalWrite(led4, HIGH);
    delay(500);
  }

}
