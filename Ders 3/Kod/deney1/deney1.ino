#define deger A0

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  Serial.println("Potansiyometre Değer Okuma");
}

void loop()
{
  Serial.println(analogRead(deger));
  delay(100);
}
