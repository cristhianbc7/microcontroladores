/*
  Tarea 2.1 Arduino digitalWrite (pinMode OUTPUT)
  1. Hacer parpadear el pin 10 del Arduino (2 segundos prendidos y 1 segundo apagado)
 */

void setup() {
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(10, HIGH);
  delay(2000);
  digitalWrite(10, LOW);
  delay(1000);
}
