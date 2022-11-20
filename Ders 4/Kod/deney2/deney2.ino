#define trigPin 9
#define echoPin 8

float mesafe;
float sure;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(9, HIGH);
  delayMicroseconds(1000);
  digitalWrite(9, LOW);
  sure = pulseIn(8, HIGH);
  
  mesafe = (sure/2)/29.1;
  Serial.print("Uzaklik = ");
  Serial.print(mesafe);
  Serial.println(" cm");
  Serial.println("-----------------");
}
