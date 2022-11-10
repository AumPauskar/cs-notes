include <dht.h>
dht DHT;
#define dhtPin 4
const int ledVar = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledVar, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = DHT.read11(dhtPin);
  Serial.print("Temprature: ");
  // float temp = DHT.temperature;
  if ( DHT.temperature > 25.00) {
    digitalWrite(ledVar, HIGH);
  } else {
    digitalWrite(ledVar, LOW);
  }
  Serial.println(DHT.temperature);
  Serial.print("Humidity: ");
  Serial.println(DHT.humidity);
  delay(2000);
}