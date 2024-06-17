#define temp A0


void setup() {

pinMode(temp, INPUT);

Serial.begin(9600)


}

void loop() {

 
Serial.println (analogRead(temp) /2)


}
  
 
