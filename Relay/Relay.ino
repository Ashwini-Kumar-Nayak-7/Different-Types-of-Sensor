int RelayPin = 6;

void setup() {
  // Set RelayPin as an output pin
  pinMode(RelayPin, OUTPUT);
}

void loop() {
  // Let's turn on the relay...
  digitalWrite(RelayPin, LOW);
  delay(60000);
  
  // Let's turn off the relay...
  digitalWrite(RelayPin, HIGH);
  delay(30000);
  
  digitalWrite(RelayPin, LOW);
  delay(2000);
  digitalWrite(RelayPin, HIGH);
  delay(2000);
  digitalWrite(RelayPin, LOW);
  delay(2000);
  digitalWrite(RelayPin, HIGH);
  delay(2000);
  digitalWrite(RelayPin, LOW);
  delay(2000);
  
  digitalWrite(RelayPin, HIGH);
  delay(10000);
}
