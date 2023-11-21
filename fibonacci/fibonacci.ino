const int ledPin = 13;

void setup() {
  Serial.begin(9600); 
  pinMode(ledPin, OUTPUT);
}

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
}