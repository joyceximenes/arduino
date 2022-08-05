#define led 4 // ligado na porta 4
#define btn 3
int btnClicado = 0;
int btnLiberaddo = 0;

void trocaLed(){
  if(digitalRead(btn)== HIGH) // ta ligado fica desligado
    digitalWrite(led, LOW);
  else // te desligado fica ligado
    digitalWrite(led, HIGH);
}

void keyup(){
  /* se o botao foi acionado, ele é zerado */
  if ((btnClicado==1) and (btnLiberado==1){
    btnClicado = 0;
    btnLiberado = 0;
    trocaLed();
  }
      
}

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop()
{
  if(digitalRead(btn) == HIGH){ // se os 5v  estiverem passando
    btnClicado = 1; 
    btnLiberado = 0;
  }
   else
    btnLiberado = 1;  
  keyup();
}
