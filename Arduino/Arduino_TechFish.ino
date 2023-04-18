#include <DHT.h>
#include <DHT_U.h>

#include <Adafruit_Sensor.h>

#include <DHT.h>
#include <DHT_U.h>

#include "DHT.h"
 
#define DHTPIN A5
#define LM35PIN A0
#define LUMIPIN A3
#define CHAVPIN 7
 

DHT dht(DHTPIN, DHT11);

void setup()
{
  pinMode(DHTPIN, INPUT);
  pinMode(CHAVPIN, INPUT);
  Serial.begin(9600);
  dht.begin();
}
 
void loop() 
{
  float dht11_umidade = dht.readHumidity();
  float dht11_temperatura = dht.readTemperature();
  dht11_temperatura = dht11_temperatura * 0.050;
  Serial.print(dht11_umidade);
  Serial.print(";");
  Serial.print(dht11_temperatura);
  Serial.print(";");
  
  float lm35_temperatura = analogRead(LM35PIN);
  lm35_temperatura = lm35_temperatura * 0.0050;
  lm35_temperatura = lm35_temperatura +1;
  Serial.print(lm35_temperatura);
  Serial.println(";");
  delay(1000);
}
