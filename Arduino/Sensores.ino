
#include "DHT.h"
#define dht_type DHT11 
int dht_pin = A1;
DHT dht_1 = DHT(dht_pin, dht_type);
const int LM35 = A0;
float temperatura;

void setup(){

    Serial.begin(9600);
    dht_1.begin();

}

void loop(){

    temperatura = (float(analogRead(LM35))*5/(1023))/0.01;
    float umidade = dht_1.readHumidity();

    if (isnan(temperatura) or isnan(umidade))
    {
        Serial.println("Erro ao ler os Sensores");
    }
    else
    {
        Serial.print(umidade);
        Serial.print(" % ");
        Serial.println(temperatura);
    }

    delay(2000);

}