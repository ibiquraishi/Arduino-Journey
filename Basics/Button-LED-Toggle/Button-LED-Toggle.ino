int led = 13;
int button = 2;

int buttonState;
int projectState = LOW;
int lastButtonState = LOW;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {

  buttonState = digitalRead(button);

  if (buttonState == HIGH && lastButtonState == LOW) {
    projectState = !projectState;
  }

  lastButtonState = buttonState;

  digitalWrite(led, projectState);

  // PROJECT CODE GOES HERE
  
}

