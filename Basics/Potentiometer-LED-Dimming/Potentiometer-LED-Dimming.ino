int led = 9;
int button = 2;

int buttonState;
int projectState = LOW;
int lastButtonState = LOW;

int pot = A0;
int potValue;
int brightness;


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

  if(projectState == HIGH){
    potValue = analogRead(pot);
    brightness = map(potValue, 0, 1023, 0 , 255);
    analogWrite(led,brightness);
  }
  else{
    analogWrite(led,0);
  }
  
}
