#define M_D 10
#define M_V 5
#define botao1 3
#define VERMELHO 6
#define VERDE 7
#define botao2 2

void setup() {
  pinMode(M_D , OUTPUT);
  pinMode(M_V , OUTPUT);
  pinMode(botao1 , INPUT);
  pinMode(VERMELHO , OUTPUT);
  pinMode(VERDE , OUTPUT);
  pinMode(botao2  , INPUT);

}

void loop() {
  if (digitalRead(botao1) == HIGH) {
    digitalWrite(VERMELHO , HIGH);
     digitalWrite(VERDE , LOW);
    digitalWrite(M_D , HIGH);
    digitalWrite(M_V , HIGH);
  } 
  else if (digitalRead(botao2) == HIGH) {
    digitalWrite(VERDE , HIGH);
    digitalWrite(VERMELHO , LOW);
    digitalWrite(M_D , LOW);
    digitalWrite(M_V , HIGH);
  } else{
     digitalWrite(VERDE , LOW);
     digitalWrite(VERMELHO , LOW);
    digitalWrite(M_D , LOW);
    digitalWrite(M_V , LOW);
  }
}
