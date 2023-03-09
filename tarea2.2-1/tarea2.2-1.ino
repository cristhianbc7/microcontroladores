/*
  Tarea 2.2 Arduino digitalRead (pinMode INPUT)

  1. Hacer que si el pin 4 esta en alto prenda el pin 10 del Arduino
     y apague el pin 13. Si el pin 4 esta en bajo prenda el pin 13
     y apague el pin 10.

  NOTA: 
  HIGH cuando no está presionado
  LOW cuando está presionado 
*/

void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT_PULLUP);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int sensorVal = digitalRead(4);
  Serial.println(sensorVal);

  if(sensorVal == HIGH) {
    digitalWrite(13, LOW);
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(13, HIGH);
    digitalWrite(10, LOW);
  }

}
