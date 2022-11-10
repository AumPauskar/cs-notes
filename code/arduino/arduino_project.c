/*Problem statement
Interface LCD with Arduino Uno to display the right to left 
scrolling message IoT Internship
*/
// title, problem statement, onjective, components, interfacing block diagram
// libraries
#include <LiquidCrystal.h>

// programming constants
const int rs = 6, en = 7, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int initialDelay = 1000;
int pixelDelay = 300;
char message[] = "IoT Internship";

void setup() {
  lcd.begin(16, 2);
  lcd.print(message);
  delay(initialDelay);
}

void loop() {
  // given count values to properly scroll through the screen
  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    lcd.scrollDisplayLeft();
    delay(pixelDelay);
  }

  for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    lcd.scrollDisplayRight();
    delay(pixelDelay);
  }
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    lcd.scrollDisplayLeft();
    delay(pixelDelay);
  }

  delay(1000);

}
