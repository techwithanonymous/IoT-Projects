const int potPin = A0;
const int ledPin = 9;
void setup()
{
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int potVal = analogRead(potPin);
  Serial.println("Reading before conversion");
  Serial.println(potVal);
  //delay(1000);use when checking value from serial monitor
  int brightness = map(potVal,0,1023,0,255);
  Serial.println("Value after conversion");
  Serial.println(brightness);
  //delay(1000);use when checking value from serial monitor
  analogWrite(ledPin,brightness);
  delay(10);
}
