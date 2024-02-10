const int pins[] = {13, 12, 11};
const int numPins = sizeof(pins) / sizeof(pins[0]);
int x = 100;

void setup() {
  for (int i = 0; i < numPins; ++i) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numPins; ++i) {
    digitalWrite(pins[i], HIGH);
    delay(x);
    digitalWrite(pins[i], LOW);
    delay(x);
  }
}

