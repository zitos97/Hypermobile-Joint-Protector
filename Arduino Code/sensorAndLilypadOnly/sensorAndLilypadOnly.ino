const int potPin = 2; // digital pin 2 for the potentiometer
 
int current = 0; // recent value of stretch sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor and map it to a smaller range
  current = analogRead(potPin);
  current = map(current, 0, 1023, 0, 255); 
  // print current value
  Serial.println(current); 
  
  // do this procedure once in a second
  delay(1000);
}
