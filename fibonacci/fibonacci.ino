const int ledPin = 13;

void setup() {
  Serial.begin(9600); 
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int flist[] = {1, 1, 2};

  for (int i = 0; i < 10; ++i) {
    flist[i + 2] = flist[i + 1] + flist[i];

    Serial.println(flist[i]);

    for (int j = 0; j < flist[i]; ++j) {
      digitalWrite(ledPin, HIGH);
      delay(500);
      digitalWrite(ledPin, LOW);
      delay(500);
    }

    delay(2500);
  }

  Serial.println("Final Array:");
  for (int i = 0; i < 10; ++i) {
    Serial.println(flist[i]);
  }

  while (true) {
    // Do nothing
  }

}
