const int ledPins[10] = {
  36, 39, 34, 35, 32,
  14, 33, 25, 26, 27
};

void setup() {
  for (int i = 0; i < 10; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], i % 2 == 0 ? HIGH : LOW);
  }

  delay(400);

  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], i % 2 == 0 ? LOW : HIGH);
  }

  delay(400);
}
