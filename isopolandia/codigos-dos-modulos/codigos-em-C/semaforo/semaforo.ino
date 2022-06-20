// dando um "nome" para as portas 
// agora temos o botão também
int bt1 = 2;
int verde_p1 = 3;
int vermelho_p1 = 4;
int verde_s = 5;
int amarelo_s = 6;
int vermelho_s = 7;
int vermelho_p2 = 8;
int verde_p2 = 9;
int bt2 = 10; 

void setup() {
  // indicando para o arduíno quais portas vamos usar
  pinMode(verde_p1, OUTPUT);
  pinMode(vermelho_p1, OUTPUT);
  
  pinMode(verde_s, OUTPUT);
  pinMode(vermelho_s, OUTPUT);
  pinMode(amarelo_s, OUTPUT);
  
  pinMode(vermelho_p2, OUTPUT);
  pinMode(verde_p2, OUTPUT);
  
  pinMode(bt1, INPUT);
  pinMode(bt2, INPUT);

  // iniciamos com o verde ligado ...
  digitalWrite(verde_s, HIGH);
  digitalWrite(vermelho_p1, HIGH);
  digitalWrite(vermelho_p2, HIGH);

  // .. e o amarelo e vermelho desligados
  digitalWrite(vermelho_s, LOW);
  digitalWrite(amarelo_s, LOW);
  digitalWrite(verde_p1, LOW);
  digitalWrite(verde_p2, LOW);
}
 
void loop() {
  if ((digitalRead(bt1) == HIGH) || (digitalRead(bt2) == HIGH)) {
      // esperamos um pouco antes de começar a lógica
      delay(2000);
      semaforo();
  }
}
 
void semaforo() {
  // amarelo logo após o botão ser pressionado!
  // se encaixa perfeitamente na nossa lógica
  // entendeu porque começamos no amarelo no exercício anterior? 🙂
  digitalWrite(vermelho_s, LOW);
  digitalWrite(amarelo_s, HIGH);
  digitalWrite(verde_s, LOW);
 
  // esperamos 2s com o sinal no amarelo
  delay(2000);
 
  // apagamos o amarelo e ligamos o vermelho
  digitalWrite(amarelo_s, LOW);
  digitalWrite(vermelho_s, HIGH);
  digitalWrite(vermelho_p1, LOW);
  digitalWrite(vermelho_p2, LOW);
  digitalWrite(verde_p1, HIGH);
  digitalWrite(verde_p2, HIGH);
  // Não precisa desse pois o verde já estava apagado
  // digitalWrite(verde, LOW);
 
  // esperamos 5s com o sinal fechado
  delay(5000);  
 
  // para finalizar, apagamos o vermelho e ligamos o verde
  digitalWrite(vermelho_p1, HIGH);
  digitalWrite(vermelho_p2, HIGH);
  digitalWrite(verde_s, HIGH);
  // não precisa desse pois o amarelo já estava apagado
  // digitalWrite(amarelo, LOW);
  digitalWrite(verde_p1, LOW);
  digitalWrite(verde_p2, LOW);
  digitalWrite(vermelho_s, LOW);
 
  // esperamos 5s com o sinal aberto
  delay(5000);
}
