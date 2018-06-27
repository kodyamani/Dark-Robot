const int photoResistor = A0;
const int threshold = 311;

int sensorReading = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorReading = analogRead(photoResistor);
  Serial.println(sensorReading);

  if(sensorReading <= 311) {
    Serial.println("Ahhh! It's dark!");
    delay(2000);
  }
  delay(100);
}

