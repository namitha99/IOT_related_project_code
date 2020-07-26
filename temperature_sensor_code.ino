#include "DHTesp.h"
 
#define DHTpin 0    //D3 of NodeMCU is GPIO0 
DHTesp dht;
 
void setup()
{
  Serial.begin(115200);
  dht.setup(DHTpin, DHTesp::DHT11); //for DHT11 Connect DHT sensor to GPIO 0
  
}
 
void loop()
{
  //delay(dht.getMinimumSamplingPeriod());
 
  float humidity = dht.getHumidity();
  float temperature = dht.getTemperature();
 
  //Serial.print(dht.getStatusString());
  //Serial.print("\t");
  Serial.print(humidity);
  Serial.print("\t\t");
  Serial.print(temperature);
  Serial.print("\t\t");
  //Serial.print(dht.toFahrenheit(temperature));
  //Serial.print("\t\t");
  //Serial.println(dht.computeHeatIndex(temperature, humidity, false));
  delay(2000);
  //Serial.print("\t\t");
  //Serial.println(dht.computeHeatIndex(dht.toFahrenheit(temperature), humidity, true), 1);
}
