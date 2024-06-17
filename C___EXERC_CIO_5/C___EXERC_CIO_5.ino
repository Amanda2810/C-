#define M_D 10
#define M_V 5
#define controle A0

void setup() {
  pinMode(M_D , OUTPUT);
  pinMode(M_V , OUTPUT);
  pinMode(controle , INPUT);
}

void loop() {
  if (analogRead(controle) <= 100 ) {
    digitalWrite(M_D , HIGH);
    digitalWrite(M_V , HIGH);
  }
  if (analogRead(controle) >= 101 ) {
    digitalWrite(M_D , LOW);
    digitalWrite(M_V , LOW);
  }
}
