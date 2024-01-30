// Define the pins for DB3 and DB4
const int DB3_PIN = 2; // Replace with the actual pin number connected to DB3
const int DB4_PIN = 3; // Replace with the actual pin number connected to DB4

void setup() {
  // Set DB3 and DB4 pins as output
  pinMode(DB3_PIN, OUTPUT);
  pinMode(DB4_PIN, OUTPUT);
}

void loop() {
  // Turn on DB3 for 1 second
  digitalWrite(DB3_PIN, HIGH);
  delay(100); // 1 second

  // Turn off DB3
  digitalWrite(DB3_PIN, LOW);

  // Wait 0for 1 second
  delay(100);

  // Turn on DB4 for 1 second
  digitalWrite(DB4_PIN, HIGH);
  delay(100); // 1 second

  // Turn off DB4
  digitalWrite(DB4_PIN, LOW);

  // Wait for 1 second
  delay(100);
}
