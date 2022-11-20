int ledler[] = {11, 12, 13};

void setup()
{
  for(int i = 0; i < 3; i++)
  {
    pinMode(ledler[i], OUTPUT);
  }
}

void loop()
{
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(ledler[i], HIGH);
    delay(1000);
    digitalWrite(ledler[i], LOW);
  }
  for (int j = 2; j > -1; j--)
  {
    digitalWrite(ledler[j], HIGH);
    delay(1000);
    digitalWrite(ledler[j], LOW);
  }
  
}
