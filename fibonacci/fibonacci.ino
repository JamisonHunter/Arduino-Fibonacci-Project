const int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long flist[21] = {1, 1, 2};  
  for (int i = 0; i < 19; ++i) { 
    flist[i + 3] = flist[i + 2] + flist[i + 1];

    Serial.println(flist[i]);

    for (unsigned long j = 0; j < flist[i + 2]; ++j) {
      digitalWrite(ledPin, HIGH);
      delay(500);
      digitalWrite(ledPin, LOW);
      delay(500);
    }

    delay(2500);
  }

  Serial.println("Final Array:");
  for (int i = 0; i < 21; ++i) {
    Serial.println(flist[i]);
  }

  while (true) {
    // Do nothing
  }
}
