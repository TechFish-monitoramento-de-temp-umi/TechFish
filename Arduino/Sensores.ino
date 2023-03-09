
// inclusão da bliblioteca do sensor DHT11
#include <DHT.h>

// Definição dos pinos para entrada de dados 
#define DHTPIN A1
#define LM35PIN A0

// inicialização Do monitor serial, das entradas(pins)
void setup()
{

  pinMode(DHTPIN, INPUT);
  pinMode(LM35PIN, INPUPT);
  Serial.begin(9600);
  dht.begin();

}

// codigo que irá ser repetido infinitamente (enquanto houver energia na placa do Arduino)
void loop()
{
    // Definição das Variaveis
    float dht11_umidade = dht.readHumidity();
    float dht11_temperatura = dht.readTemperature();
    float lm35_temperatura = analogRead(LM35PIN);
    lm35_temperatura = (lm35_temperatura * 0.00488) * 100;

    // Verificação do funcionamento dos sensores
    if(isnan dht11_temperatura or isnan lm35_temperatura)
    {
        // mensagem de erro caso não consiga captar qualquer informação
        Serial.println("Erro ao captar os dados");
    }
    else
    {
        // Os dados que serão apresentados no monitor serial e futuramente no banco de dados
        Serial.print(dht11_umidade);
        Serial.print(";");
        Serial.print(lm35_temperatura);
        Serial.println(";");

    }
  
}

// FIM DO CODIGO 

// Codigos para captação de dados com outros sensores (Luminosidade e Bloqueio/Proximidade)

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