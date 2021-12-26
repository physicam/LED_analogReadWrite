#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  // put your setup code here, to run once:
  lcd.init();                      // initialize the lcd 
  lcd.backlight();
  lcd.setCursor(1,0);
  lcd.print("Hello, world!");
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(0);
  analogWrite(3, val/4);
  lcd.setCursor(2,1);
  lcd.print("Val="+String(val)+"("+String(val/4)+")     ");
  delay(50);
}
