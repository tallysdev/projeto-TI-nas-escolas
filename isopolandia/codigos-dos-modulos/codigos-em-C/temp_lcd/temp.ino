#include "dht.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16, 2);

const int pinoDHT11 = A1;

dht DHT;

void setup(){
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
}

void loop(){
  DHT.read11(pinoDHT11);

  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(DHT.temperature);
  lcd.print(" C");
  
  lcd.setCursor(0,1);
  lcd.print("Umid: ");
  lcd.print(DHT.humidity);
  lcd.print(" %");

  delay(3000);
  
  lcd.clear();
}
