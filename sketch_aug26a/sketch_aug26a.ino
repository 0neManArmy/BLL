int led = 7;
int trigPin = 9;    // Trigger
int echoPin = 10;    // Echo
long duration, cm;
 
void setup() {
  pinMode(led, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
 
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  cm = (duration/2) / 29.1;

  if(cm<=) {
    digitalWrite(led, HIGH);   
  }else{
    digitalWrite(led, LOW);   
  }
  
  delay(250);
}
