int led; // com a variavel ao inves de colocar a porta escrevemos 
// o nome dela 
  
void setup()
{
  led = 10; //porta 10
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay (2000);
  digitalWrite(led, LOW);
  delay (2000);
}
