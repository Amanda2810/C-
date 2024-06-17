#define VERMELHO 11
#define AZUL 13
#define VERDE 12
void setup(){
  pinMode(VERMELHO , OUTPUT);
  pinMode(VERDE , OUTPUT);
  pinMode(AZUL , OUTPUT);  
}
void loop(){
 digitalWrite(VERMELHO, HIGH);
 digitalWrite(AZUL , HIGH);
 delay(1000);
 digitalWrite(VERMELHO, HIGH);
 digitalWrite(VERDE , HIGH);
 digitalWrite(AZUL , LOW);
 delay(1000);
 digitalWrite(VERMELHO, LOW);
 digitalWrite(AZUL , HIGH);
 digitalWrite(VERDE , HIGH);
 delay(1000);
}
