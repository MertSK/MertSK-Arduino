int lm35 = A0;
int sicaklik = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float deger = analogRead(lm35);
  sicaklik = map(deger, 20.43954, 358.05, -40.0, 125.0);
  Serial.print("Sicaklik: ");
  Serial.print(sicaklik);
  Serial.println("C derece");
  delay(100);
}
