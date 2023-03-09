/*
  Tarea 2.2-2

  Similar a la Tarea 2.2-1, pero que si AMBOS pin 2 y 4 esten en alto se apaguen los pines 10 y 13,
  cuando esten en bajo se enciendan ambos pines

  NOTA: 
  HIGH cuando no está presionado
  LOW cuando está presionado 
*/

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int sensorVal1 = digitalRead(2);
  int sensorVal2 = digitalRead(4);

  if (sensorVal1 == HIGH && sensorVal2 == HIGH) {
    digitalWrite(10, HIGH);
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(10, LOW);
    digitalWrite(13, LOW);
  }

}
