#define touchPin 2
//make sure it is on the same pin 
// Uncomment the code relating to 'ledPin' if you do not want to LED to flash
 
int ledPin = 13;
 
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(touchPin, INPUT);
}
 
void loop() {
  int touchValue = digitalRead(touchPin);
  if (touchValue == HIGH) {
    Serial.println("TOUCHED");
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(350);
}
