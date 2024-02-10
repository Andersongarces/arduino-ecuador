// C++

int pin = 12;

void setup() {
  pinMode(pin, OUTPUT);

}

void loop() {
  digitalWrite(pin, HIGH);
  delay(100);
  digitalWrite(pin, LOW);
  delay(100);

  digitalWrite(pin, HIGH);
  delay(100);
  digitalWrite(pin, LOW);
  delay(500);

  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(500);

  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(500);

  abort();

}
