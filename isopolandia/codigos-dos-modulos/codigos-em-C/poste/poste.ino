#define ldrPin A0
#define ledPin1 6
#define ledPin2 7

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.println(analogRead(ldrPin));
  
  if (analogRead(ldrPin) > 1000) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
  }

  else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    
  }

}
