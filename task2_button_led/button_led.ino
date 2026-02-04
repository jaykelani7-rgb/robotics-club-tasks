int ledPin=13;
int buttonPin=2;
int buttonstate=0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  
  buttonstate = digitalRead(buttonPin);

  if(buttonstate == HIGH){
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
