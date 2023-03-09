
#include <DHT.h>
#include <DHT.h>

#define DHTPIN A1
#define LM35PIN A0

DHT dht(DHTPIN, DHT11);

void setup()
{

  pinMode(DHTPIN, INPUT);
  Serial.begin(9600);
  dht.begin();

}

void loop()
{

    float dht11_umidade = dht.readHumidity();
    float dht11_temperatura = dht.readTemperature();
    float lm35_temperatura = analogRead(LM35PIN);
    lm35_temperatura = (lm35_temperatura * 0.00488) * 100;

    if(isnan dht11_temperatura or isnan lm35_temperatura)
    {
        Serial.println("Erro ao captar os dados");
    }
    else
    {
        Serial.print(dht11_umidade);
        Serial.print(";");
        Serial.print(lm35_temperatura);
        Serial.println(";");
    }
  
}

//  #define LUMIPIN A2
//  #define CHAVPIN 7
//  pinMode(CHAVPIN, INPUT);
//  int chave = digitalRead(7);

//  if (chave == 0)
//  {
//      Serial.print("1");
//  }
//  else
//  {
//      Serial.print("0");
//  }

//  float luminosidade = analogRead(LUMIPIN);
 
//  Serial.print(luminosidade);
//  Serial.print(";");