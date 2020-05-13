int LEDState = 0;
int ledPin = 8;
int buttonPin = 2;

int buttonNew;
int buttonOld = 1;
int dt = 100;
int counter = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonNew = digitalRead(buttonPin);
  
  Serial.println(buttonNew);
  
  if (buttonNew == HIGH) {
    digitalWrite(ledPin, HIGH);
      delay(300);  
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(100);
}
