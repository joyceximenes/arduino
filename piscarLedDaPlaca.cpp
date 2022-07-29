// prepara os comandos, roda so uma vez
// configurações
void setup() { 
  pinMode(13, OUTPUT);
}

// decola voo, executa em loop
void loop() {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(2000);
}
