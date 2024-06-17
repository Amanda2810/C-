#define M_D 10
#define M_V 5
#define botao 3
#define botao2 2

void setup() {
  pinMode(M_D , OUTPUT);
  pinMode(M_V , OUTPUT);
  pinMode(botao , INPUT);

}

void loop() {
  if (digitalRead(botao) == HIGH) {
    digitalWrite(M_D , HIGH);
    digitalWrite(M_V , HIGH);
  } 
  else if (digitalRead(botao2) == HIGH) {
    digitalWrite(M_D , LOW);
    digitalWrite(M_V , HIGH);
  } else{
    digitalWrite(M_D , LOW);
    digitalWrite(M_V , LOW);
  }
}
