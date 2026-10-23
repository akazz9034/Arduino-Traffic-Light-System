
void setup() {
  pinMode(2, OUTPUT); // Green LED
  pinMode(3, OUTPUT); // Yellow LED
  pinMode(4, OUTPUT); // Red LED
}

void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(3000);

  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  delay(1000);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(3000);
}
