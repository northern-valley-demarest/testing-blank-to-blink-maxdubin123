void setup() {
  pinmode(13, OUTPUT);
}

void loop() {
  digitalWtie (13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
}
