// Progetto: Due LED alternati
// Autore: Giovanni Galofaro
// Scheda: Arduino Mega 2560 R3
//
// Due LED si accendono alternativamente.
// Ogni LED rimane acceso per 1 secondo.

const int LED_1 = 13;
const int LED_2 = A1;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
}

void loop() {
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  delay(1000);

  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  delay(1000);
}
