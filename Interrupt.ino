#include<LiquidCrystal.h>

LiquidCrystal lcd(7,8,9,10,11,12);//Define LCD Display pins RS, E, D4, D5, D6, D7

int i = 0;

void setup() {
  // put your setup code here, to run once:

  lcd.begin(50,3);
  lcd.setCursor(0,0);
  lcd.print("TEST CIRCUIT");
  lcd.setCursor(0,1);
  lcd.print("Arduino Interrupt");
  delay(3000);
  lcd.clear();

  attachInterrupt(digitalPinToInterrupt(2),inter1,RISING);
  attachInterrupt(digitalPinToInterrupt(3),inter2,RISING);

}

void loop() {
  // put your main code here, to run repeatedly:

  lcd.clear();
  lcd.print("Counter:");
  lcd.print(i);

  ++i;

  //delay(1000);
}

void inter1()
{
  lcd.setCursor(0,1);
  lcd.print("Button 2");
}

void inter2()
{
  lcd.setCursor(0,1);
  lcd.print("Button 3");
}

