// C++ code

const int pins[] = {7, 4, 2};
const int numPins = sizeof(pins) / sizeof(pins[0]);
int x = 200;

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

