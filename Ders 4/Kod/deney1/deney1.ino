#define red 9
#define blue 10
#define green 11
#define pot1 A0
#define pot2 A1
#define pot3 A2

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  int red_isik = analogRead(pot1);
  int blue_isik = analogRead(pot2);
  int green_isik = analogRead(pot3);

  red_isik = map(red_isik, 0, 1023, 0, 255);
  blue_isik = map(blue_isik, 0, 1023, 0, 255);
  green_isik = map(green_isik, 0, 1023, 0, 255);

  analogWrite(red, red_isik);
  analogWrite(blue, blue_isik);
  analogWrite(green, green_isik);
}
