#define led_red 10
#define led_green 9
#define led_yellow 8
//define ocupa menos espaço
//ele substitui o texto pelo valor
//não busca na memoria

void setup()
{
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
}

/* criando funções para os sinais */
void close(int tmp){
  digitalWrite(led_red, HIGH);
  digitalWrite(led_green, LOW);
  digitalWrite(led_yellow, LOW);
  delay(tmp);
}

void wait(int tmp){
  digitalWrite(led_red, LOW);
  digitalWrite(led_green, LOW);
  digitalWrite(led_yellow, HIGH);
  delay(tmp);
} 

void open(int tmp){
  digitalWrite(led_red, LOW);
  digitalWrite(led_green, HIGH);
  digitalWrite(led_yellow, LOW);
  delay(tmp);
}

void loop()
{
  close(5000);
  wait(2000);
  open(6000);
}
