const int vibPin = 3;  // digital pin 3 for the vibration module
const int potPin = 0;   // analog pin 0 for the potentiometer
 
int current = 0; // recent value of potentiometer/stretch sensor
int reference = 0; // reference value that current will be compared to

void setup() {
  pinMode(potPin, INPUT);
  pinMode(vibPin, OUTPUT);
  
  
  // vibrate twice to signal that initial reference measurement starts now
  // light up the LED simultaneously
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
  current = analogRead(potPin);   
  current = map(current, 0, 1023, 0, 255);
  // set it as reference
  reference = current;
  
  // vibrate twice to signal that initialization phase is over
  // light up the LED simultaneously
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
  current = analogRead(potPin);    
  current = map(current, 0, 1023, 0, 255);
  
  // if it is larger than the reference, notify the user, otherwise stop vibration
  if (current > reference) {
    digitalWrite(vibPin, HIGH); 
  } else {
    digitalWrite(vibPin, LOW);
  }
  
  // do this procedure once in a second
  delay(1000);
}
