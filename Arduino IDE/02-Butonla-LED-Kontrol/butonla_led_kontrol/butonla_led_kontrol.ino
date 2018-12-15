int led1;
int led2;
int led3;
int led4;

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
