#include <dht.h>
dht DHT;
#define dhtPin 4

void setup() {
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val = DHT.read11(dhtPin);
  Serial.print("Temprature: ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity: ");
  Serial.println(DHT.humidity);
  delay(2000);
}