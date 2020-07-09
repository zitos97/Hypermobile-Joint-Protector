const int vibPin = 3;
const int potPin = 0;  
 
int val1 = 0; // recent value of potentiometer/stretch sensor
int reference = 0; // reference value that val1 will be compared to

void setup() {
  pinMode(vibPin, OUTPUT);
  
  // vibrate twice to signal that initial reference measurement starts now
  digitalWrite(vibPin, HIGH);
  delay(500);
  digitalWrite(vibPin, LOW);
  delay(500);
  digitalWrite(vibPin, HIGH);
  delay(500);
  digitalWrite(vibPin, LOW);
  
  // give some time for adjustment
  delay(5000);
  // read current value of potentiometer
  val1 = analogRead(potPin);   
  val1 = map(val1, 0, 1023, 0, 255);
  // set it as reference
  reference = val1;
  
  // vibrate twice to signal that initialization phase is over
  digitalWrite(vibPin, HIGH);
  delay(500);
  digitalWrite(vibPin, LOW);
  delay(500);
  digitalWrite(vibPin, HIGH);
  delay(500);
  digitalWrite(vibPin, LOW);
}

void loop() {
  // read currect value of potentiometer/stretch sensor
  val1 = analogRead(potPin);    
  val1 = map(val1, 0, 1023, 0, 255);
  
  // if it is larger than the reference, notify the user, otherwise stop vibration
  if (val1 > reference) {
    digitalWrite(vibPin, HIGH); 
  } else {
    digitalWrite(vibPin, LOW);
  }
  
  // do this procedure once in a second
  delay(1000);
}
