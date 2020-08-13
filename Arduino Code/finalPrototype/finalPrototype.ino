const int vibPin = 3; // digital pin 3 for the vibration module
const int led = 7;    // digital pin 7 for the LED
const int stretchPin = A2;  // analog pin 2 for the stretch sensor
 
float current = 0; // recent value of stretch sensor
float reference = 0; // reference value that current will be compared to

void setup() {
  Serial.begin(9600);
  pinMode(vibPin, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(stretchPin, INPUT);
  
  // vibrate twice to signal that initial reference measurement starts now
  // light up the LED simultaneously
  digitalWrite(vibPin, HIGH);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(vibPin, LOW);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(vibPin, HIGH);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(vibPin, LOW);
  digitalWrite(led, LOW);
  
  // give some time for adjustment
  delay(5000);
  // read current value of stretchentiometer
  current = analogRead(stretchPin);   
  current = map(current, 0, 1023, 0, 255);
  // set it as reference
  reference = current;
  
  // vibrate twice to signal that initialization phase is over
  // light up the LED simultaneously
  digitalWrite(vibPin, HIGH);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(vibPin, LOW);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(vibPin, HIGH);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(vibPin, LOW);
  digitalWrite(led, LOW);
}

void loop() {
  // read currect value of stretch sensor
  current = analogRead(stretchPin);    
  current = (float) map(current, 0, 1023, 0, 255);
  
  Serial.println(current); // print current value (nice for the serial plotter tool)
  // if current is smaller than the reference value, notify the user
  // otherwise stop vibration and lightning of the LED
  // we use an error tolerance of 10%
  if (current < reference * 0.9) {
    digitalWrite(vibPin, HIGH);
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(vibPin, LOW);
    digitalWrite(led, LOW);
  }
  
  // do this procedure once in a second
  delay(1000);
}
