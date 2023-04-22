// Inclusão das bibliotecas dos sensores
#include <DHT.h>
#include <DHT_U.h>

#include <Adafruit_Sensor.h>

#include <DHT.h>
#include <DHT_U.h>

#include "DHT.h"

// Definição das portas  que serão usadas
#define DHTPIN A5
#define LM35PIN A0
 
DHT dht(DHTPIN, DHT11);

// Iniciando a configuração necessária para o funcionamento dos sensores
void setup()
{
  pinMode(DHTPIN, INPUT);
  Serial.begin(9600);
  dht.begin();
}

// Inicio do loop, que será repetido enquanto tenha energia na placa arduíno
void loop() 
{
  // definindo o tipo de dado e como o dado será obtido
  float dht11_umidade = dht.readHumidity();
  float dht11_temperatura = dht.readTemperature();
  //manipulando a variável criada com base nos valores necessários para o projeto
  dht11_temperatura = dht11_temperatura * 0.050;
  //exposição dos dados no monitor serial
  Serial.print(dht11_umidade);
  Serial.print(";");
  Serial.print(dht11_temperatura);
  Serial.print(";");

  // definindo o tipo de dado e como o dado será obtido
  float lm35_temperatura = analogRead(LM35PIN);
  // manipulando a variável criada com base nos valores necessários para o projeto
  lm35_temperatura = lm35_temperatura * 0.0050;
  lm35_temperatura = lm35_temperatura +1;
  // exposição dos daados no monitor serial
  Serial.print(lm35_temperatura);
  Serial.println(";");
  //próximos dados serão enviados para outra linha, criando assim uma lista

  //delay de 1 segundo para aquisição e exposição de dados  no monitor serial
  delay(1000);
}
