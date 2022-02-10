#include <LiquidCrystal.h>
const int rs=0,en=1,d0=2,d1=3,d2=4,d3=5,d4=6,d5=7,d6=8,d7=9;
LiquidCrystal lcd(rs,en,d0,d1,d2,d3,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.noCursor();
  lcd.print("Test");
 pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,1);
  lcd.noBlink();
  lcd.setCursor(0, 1);
  lcd.print("time:"+(millis() /1000));
  lcd.blink();
  digitalWrite(13,0);
  delay(1000);
}
