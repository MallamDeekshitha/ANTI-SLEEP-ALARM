#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Use 0x3F if 0x27 doesn't work

const int alcoholPin = A0;
const int buzzerPin = 8;
const int alcoholThreshold = 800;

void setup() {
  pinMode(alcoholPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("System Ready...");
  delay(1000);
  lcd.clear();
}

void loop() {
  int sensorValue = analogRead(alcoholPin);
  Serial.println(sensorValue);

  // Top line: Alcohol detection status
  lcd.setCursor(0, 0);
  if (sensorValue > alcoholThreshold) {
    lcd.print("V");
    delay(200);
    lcd.print("e");
     delay(200);
    lcd.print("h");
     delay(200);
    lcd.print("i");
     delay(200);
    lcd.print("c");
     delay(200);
    lcd.print("l");
     delay(200);
    lcd.print("e");
     delay(200);
    lcd.print(" ");
     delay(200);
   lcd.print("s");
     delay(200);
    lcd.print("t");
     delay(200);
    lcd.print("o");
     delay(200);
    lcd.print("p");
     delay(200);
    lcd.print("p");
     delay(200);
    lcd.print("e");
     delay(200);
    lcd.print("d");
    digitalWrite(buzzerPin, HIGH);
  } else {
    lcd.print("Drive Safe      ");
     delay(200);
    lcd.print("r");
     delay(200);
    lcd.print("i");
     delay(200);
    lcd.print("v");
     delay(200);
    lcd.print("e");
     delay(200);
    lcd.print(" ");
     delay(200);
    lcd.print("s");
     delay(200);
    lcd.print("a");
     delay(200);
    lcd.print("f");
     delay(200);
    lcd.print("e");
    digitalWrite(buzzerPin, LOW);
    
  }

  // Bottom line: Alcohol sensor value
  lcd.setCursor(0, 1);
  lcd.print("Alcohol: ");
  lcd.print(sensorValue);
  lcd.print("   "); // Clear leftover digits

  delay(300); // Small delay for LCD refresh, avoid 0ms loop
}