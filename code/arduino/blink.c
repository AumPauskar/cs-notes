const int ledVar = 13;
void setup() {
  pinMode(ledVar, OUTPUT);
}

void loop() {
  digitalWrite(ledVar, HIGH);
  delay(1000);
  digitalWrite(ledVar, LOW);
  delay(1000);
}