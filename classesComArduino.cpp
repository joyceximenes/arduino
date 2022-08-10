#define ledR 2
#define ledG 4
#define ledB 3 
#define botao 7 

class Btn{
public:
  int btnClicado, btnLiberado, pino;
  Btn(int p){ // construtor, que sempre tem o nome da classe e nao precisa especificar tipo
  pino = p;
  btnClicado = btnLiberado = 0;
}
  /* metodo pra ver se o botao foi pressionado */
  bool press (){
  	if (DigitalRead(pino) == HIGH){// le o sinal do pino (portao do botao)
  		btnClicado = 1;
  		btnLiberado = 0;
  	} else
  		btnLiberado = 1;
  	if ((btnClicado == 1) and (btnLiberado == 1)){
  		return true;
	} else
		return false;
  }
};


class Cor{
public:
	// atributos
	int pinoR, pinoG, pinoB, ciclo, maximo; 
	// construtor usando lista de inicialização (associa parametros)
	Cor(int pr, int pg, int pb):pinoR(pg), pinoG(pg), PinoB(pb){
	  ciclo = 0;
	  maximo = 3;	
	}
	// metodo pra trocar a cor do led
	void trocaLed(){
		if (ciclo == 0){
			// chama o método corLed e envia os valores em 0 ou 1 
			corLed(1, 0, 0);
		} else if (ciclo == 1){
			corLed(0, 1, 0);
		} else if (ciclo == 2){
			corLed(0, 0, 1);
		}
		ciclo++;
		if (ciclo>maximo-1){
			ciclo = 0; // redefine o ciclo
		}
	}
private: 
	// metodo pra trocar cor
	void corLed (int r, int g, int b){
		// r, g e b são o estado do led (high = 1, low = 0)
		digitalWrite(pinoR, r);
		digitalWrite(pinoG, g);
		digitalWrite(pinoB, b);
	}
};

Btn btn1(botao); // classe nome_do_objeto_instanciado(parametro)
// caso 2 botoes: Btn btn2(8);
Cor cor1(ledR, ledG, ledB);

void setup()
{
  pinMode(ledR, OUTPUT); // (pino, e/s)
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(botao, INPUT);
}

void loop()
{
  if (btn1.press()){ // se o press do objeto btn1 retorna true, executa
  	cor1.trocaLed(); // chama trocaLed de cor1
  }
}
