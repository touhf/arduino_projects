int redLedPin = 5;
int greenLedPin = 4;
int buttonAPin = 9;
int buttonBPin = 8;

byte leds = 0;

void setup()
{
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(buttonAPin, INPUT_PULLUP);
  pinMode(buttonBPin, INPUT_PULLUP);
}

void loop()
{
  // red LED
  if (digitalRead(buttonAPin) == LOW) {
    digitalWrite(redLedPin, HIGH);
  }
  if (digitalRead(buttonAPin) == HIGH) {
    digitalWrite(redLedPin, LOW);
  }

  // green LED
  if (digitalRead(buttonBPin) == LOW) {
    digitalWrite(greenLedPin, HIGH);
  }
  if (digitalRead(buttonBPin) == HIGH) {
    digitalWrite(greenLedPin, LOW);
  }
}
