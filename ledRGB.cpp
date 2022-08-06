#define ledR 2
#define ledG 3
#define ledB 4
#define btn 7
#define maximo 3  //qtd cores configuradas

int btnClicado=0, btnLiberado  = 0, ciclo = 0;

void red(){
  digitalWrite(ledR, HIGH);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, LOW);
}

void green(){
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledB, LOW);
}

void blue(){
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, HIGH);
}

void trocaLed(){
  if(ciclo==0){
    red();
  } else if (ciclo==1){
    green();
  } else if (ciclo==2){
    blue();
  }
  ciclo++;
  if (ciclo>maximo-1){ //ta no maximo, volta pro 0
    ciclo = 0;
  }
}

void verificaBtn(){
  if(digitalRead(btn)==HIGH){
    btnClicado = 1;
    btnLiberado = 0;
    // se o botao estiver HIGH significa que foi clicado
  } else // caso contrario(LOW)foi liberado
    btnLiberado = 1;
  if ((btnClicado == 1) and (btnLiberado == 1)){ 
    // ciclo chegou ao fim
    btnClicado =  0;
    btnLiberado = 0;
    trocaLed(); // troca a cor, proximo ciclo
  }
}

void setup()
{
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(btn, INPUT);
}


void loop()
{
  verificaBtn();
}
