int ledPin = 13; // LED on Pin 13 of Arduino
int pirPin = 7; // Input for HC-S501

int pirValue; // place to store read PIR value

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);

  digitalWrite(ledPin, LOW);
}

void loop() {
  pirValue = digitalRead(pirPin);
  digitalWrite(ledPin, pirValue);
}