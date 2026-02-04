int ledPin = 13;
int buttonPin = 2;

int speeds[] = {200, 500, 1000};
int index = 0;

bool lastButtonState = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  bool buttonState = digitalRead(buttonPin);

  if (lastButtonState == HIGH && buttonState == LOW) {
    index++;
    if (index > 2) index = 0;
  }

  lastButtonState = buttonState;

  digitalWrite(ledPin, HIGH);
  delay(speeds[index]);
  digitalWrite(ledPin, LOW);
  delay(speeds[index]);
}
