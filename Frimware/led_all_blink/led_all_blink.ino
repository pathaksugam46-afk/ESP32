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
    digitalWrite(ledPins[i], HIGH);
  }

  delay(500);

  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], LOW);
  }

  delay(500);
}
