const int pinoSEN = 3; //PINO DIGITAL UTILIZADO PELO SENSOR DE PRESENÇA
const int pinoLED1 = 4; //PINO DIGITAL UTILIZADO PELO LED 1
const int pinoLED2 = 5; // PINO DIGITAL UTILIZADO PELO LED 2
const int pinoLED3 = 6; // PINO DIGITAL UTILIZADO PELO LED 3
const int pinoLED4 = 7; // PINO DIGITAL UTILIZADO PELO LED 4
const int pinoBUZ = 8; // PINO DIGITAL UTILIZADO PELO BUZZER

 
void setup(){
  pinMode(pinoLED1, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoLED2, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoLED3, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoLED4, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoBUZ, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoSEN, INPUT); //DEFINE O PINO COMO ENTRADA
}
void loop(){
 if(digitalRead(pinoSEN) == HIGH){ //SE A LEITURA DO PINO FOR IGUAL A HIGH, FAZ
    digitalWrite(pinoLED1, HIGH); //ACENDE O LED 1
    digitalWrite(pinoLED2, HIGH); //ACENDE O LED 2
    digitalWrite(pinoLED3, HIGH); //ACENDE O LED 3
    digitalWrite(pinoLED4, HIGH); //ACENDE O LED 4
    tone(pinoBUZ,1500);
    delay(500);
    digitalWrite(pinoLED1, LOW); //APAGA O LED 1
    digitalWrite(pinoLED2, LOW); //APAGA O LED 2
    digitalWrite(pinoLED3, LOW); //APAGA O LED 3
    digitalWrite(pinoLED4, LOW); //APAGA O LED 4
    delay(500);
    noTone(pinoBUZ);
 }else{ //SENÃO, FAZ
    digitalWrite(pinoLED1, LOW); //APAGA O LED 1
    digitalWrite(pinoLED2, LOW); //APAGA O LED 2
    digitalWrite(pinoLED3, LOW); //APAGA O LED 3
    digitalWrite(pinoLED4, LOW); //APAGA O LED 4
    noTone(pinoBUZ);
 }
}
