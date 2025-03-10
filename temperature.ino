#include "DHT.h" // has to be added after installting libary

#define DHTPIN 8    // define pin from arduino board

#define DHTTYPE DHT11  // define what type of sensor has been used

DHT dht(DHTPIN, DHTTYPE); // call a fucntion of it 

void setup() {
  Serial.begin(9600);
  dht.begin(); // to initiate the process of getting output of temperature and humidity
}

void loop() {
 delay(500);
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.print("Temperature = ");
 Serial.print(temperature);
  Serial.println(" celsius ");
  delay(500);
 Serial.print("Humidity = ");
  Serial.print(humidity);
  Serial.println(" %");
}