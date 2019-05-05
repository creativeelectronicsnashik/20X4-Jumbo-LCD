#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(20, 4);
}

void loop() {
  delay(1000);
  lcd.setCursor(0, 0);
  lcd.print("Creative Electronics");
  lcd.setCursor(0, 1);
  lcd.print("      20X4 JHD      ");
  lcd.setCursor(0, 2);
  lcd.print("   LCD Interfacing  ");
  lcd.setCursor(0, 3);
  lcd.print("  With Arduino Uno  ");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("Creative Electronics");
  lcd.setCursor(0, 2);
  lcd.print("   Please Like and  ");
  lcd.setCursor(0, 3);
  lcd.print("      Subscribe     ");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("Thanks for Watching ");
  delay(5000);
  lcd.clear();
}
