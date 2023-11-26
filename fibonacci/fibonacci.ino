const int ledPin = 13;

void setup() {
  Serial.begin(9600); 
  pinMode(ledPin, OUTPUT);
}

<<<<<<< HEAD
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

=======
// Function prototype
int fibonacci(int num);

void loop() {
  int n = 10; // Change this value to set the number of Fibonacci terms to print

  for (int i = 0; i < n; ++i) {
    int fibValue = fibonacci(i);
    Serial.print(fibValue);
    Serial.print(" ");
    delay(2000);
    for (int x = 0; x < fibValue; ++x) {
      digitalWrite(ledPin, HIGH);
      delay(500);
      digitalWrite(ledPin, LOW);
      delay(500); // Add an additional delay to control the blink speed
    }
  }

  delay(5000); // Delay for 5 seconds before printing again
}

// Function definition
int fibonacci(int num) {
  if (num <= 1) {
    return num;
  } else {
    return fibonacci(num - 1) + fibonacci(num - 2);
  }
>>>>>>> 1fd48e74e320d83a29d4cf6bba1ed7eebd64f861
}
