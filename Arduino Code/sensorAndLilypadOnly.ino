const int potPin = 2; // use analog pin 2
 
int val1 = 0; // recent value of stretch sensor

void setup() {
  Serial.begin(9600);

  val1 = analogRead(potPin);    // read the value from the sensor
  val1 = map(val1, 0, 1023, 0, 255); // map it to a smaller range
  // note for next prototype: this mapping range is maybe not necessary (but as 
  // long as it does not cause much inaccuracies, it is ok)
}

void loop() {
  val1 = analogRead(potPin);    // read the value from the sensor
  val1 = map(val1, 0, 1023, 0, 255); // map it to a smaller range

  Serial.println(val1); // print current value
  
  delay(1000); // repeat after 1 second

}
