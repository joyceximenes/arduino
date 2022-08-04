#define led 3
#define max 32 
#define min 0
#define tmp 100



/* no digital é apenas 0 ou 1 (0v ou 5v), 
ja no analogico (portas PWM) ha mais leque */
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  for (int i=min; i < max; i++){
  analogWrite(led, i);
  delay(tmp);
  }    
}
