const int ledPin = 13;

void setup() {
  Serial.begin(9600); 
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int n = 10; // Change this value to set the number of Fibonacci terms to print

  for (int i = 0; i < n; ++i) {
    Serial.print(fibonacci(i));
    Serial.print(" ");
    delay(2000);
    for(int x=x; x>=fibonacci(i); ++x) {
      digitalWrite(ledPin, HIGH);
      delay(500);
      digitalWrite(ledPin, LOW);
    }
  }

  delay(5000); // Delay for 5 seconds before printing again
}

// Function to calculate Fibonacci value using recursion
int fibonacci(int num) {
  if (num <= 1) {
    return num;
  } else {
    return fibonacci(num - 1) + fibonacci(num - 2);
  }
}