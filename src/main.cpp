#include <Arduino.h>
#define led1 D2
#define led2 D3
int retardo = 1000;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  Serial.println("El led1 esta encendido");
  Serial.println("El led2 esta apagado");
  delay(retardo);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  Serial.println("El led1 esta apagado");
  Serial.println("El led2 esta apagado");
  delay(retardo);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  Serial.println("El led1 esta apagado");
  Serial.println("El led2 esta encendido");
  delay(retardo);
}