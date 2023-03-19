void ponto(int p);
void traco(int p);
void pausa(int p);
void liga(int a, int b, int c);
int cod = 13;
int ps = 12;
int f = 11;

void setup()
{
  pinMode(cod, OUTPUT);
  pinMode(ps, OUTPUT);
  pinMode(f, OUTPUT);
}

void loop()
{
  for(int i=0; i<3; i++){
   	traco(cod); 
  }
  pausa(ps);
  
  ponto(cod);
  traco(cod);
  ponto(cod);
  ponto(cod);
  
  pausa(ps);
  
  ponto(cod);
  traco(cod);
  
  pausa(f);
  
  traco(cod);
  traco(cod);
  
  pausa(ps);
  
  ponto(cod);
  ponto(cod);
  traco(cod);
  
  pausa(ps);
  
  traco(cod);
  ponto(cod);
  
  pausa(ps);
  
  traco(cod);
  ponto(cod);
  ponto(cod);
  
  
  pausa(ps);
  
  for(int i=0; i<3; i++){
   	traco(cod); 
  }
  pausa(f);

  liga(cod, ps, f);
  delay(1000);
  digitalWrite(cod, LOW);
  delay(1000);
  digitalWrite(ps, LOW);
  delay(1000);
  digitalWrite(f, LOW);
  delay(1000);
}

void ponto(int p){
	digitalWrite(p, HIGH);
  	delay(300);
  	digitalWrite(p, LOW);
  	delay(300);
}

void traco(int p){
	digitalWrite(p, HIGH);
  	delay(900);
  	digitalWrite(p, LOW);
  	delay(300);
}

void pausa(int p){
	digitalWrite(p, HIGH);
  	delay(400);
  	digitalWrite(p, LOW);
  	delay(400);
}

void liga(int a, int b, int c){
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
}