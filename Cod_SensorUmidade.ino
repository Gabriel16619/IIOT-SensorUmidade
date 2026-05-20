const int PINO_SENSOR_UMIDADE = 26;
const int PINO_LED_SECO = 14;
const int LIMIAR_SECO = 3000;

void setup() {
  Serial.begin(115200);
  pinMode(PINO_LED_SECO, OUTPUT);
}

void loop() {
  int valor_umidade = analogRead(PINO_SENSOR_UMIDADE);

  Serial.print("Valor do sensor: ");
  Serial.println(valor_umidade);

  if (valor_umidade > LIMIAR_SECO) {
    Serial.println("ALERTA: Solo seco! É hora de regar.");
    digitalWrite(PINO_LED_SECO, HIGH);
  } else {
    Serial.println("Solo úmido. Tudo certo!");
    digitalWrite(PINO_LED_SECO, LOW);
  }

  

  delay(5000);
}