#include <LiquidCrystal.h>

const int rs = 12;
const int en = 11;
const int d4 = 5;
const int d5 = 4;
const int d6 = 3;
const int d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int trigPin = 8;
const int echoPin = 9;

void setup() {
  lcd.begin(16,2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);


}

void loop() {

  float distance = getDistance();

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Distance (cm):");
  lcd.setCursor(0, 1);
  lcd.print(distance);

  delay(1000);
}

float getDistance()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  float duration = pulseIn(echoPin, HIGH);
  float distance = (duration*.0343)/2;
  return distance;
}
