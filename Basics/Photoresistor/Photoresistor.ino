int led = 13;
int threshold = 750;
int time = 100;


void setup() {

Serial.begin(9600);
pinMode(led,OUTPUT);

}

void loop() {
 
  int photoresistor = analogRead(A0);

  Serial.println(photoresistor);

  if(photoresistor < threshold){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }

  delay(time);
}
