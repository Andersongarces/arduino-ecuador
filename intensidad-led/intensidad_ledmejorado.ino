const int red = 10;
const int dt = 500;
const int brightness[] = {10, 100, 200, 255};
const int numBrightness = sizeof(brightness) / sizeof(brightness[0]);

void setup() {
  pinMode(red, OUTPUT); // Configuramos el pin red como salida una sola vez
}

void loop() {
  for (int i = 0; i < numBrightness; ++i) {
    analogWrite(red, brightness[i]);
    delay(dt);
  }
}

