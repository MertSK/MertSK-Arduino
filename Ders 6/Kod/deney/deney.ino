#include <Servo.h>

#define led 4
#define buzz 5
#define trig 6
#define echo 7

Servo sg90;

int sure;
int mesafe;
int pos = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  sg90.attach(3);
  sg90.write(0);

}

void loop()
{
  motor();
}

void motor()
{
  for(pos = 45; pos <= 135; pos += 15)
  {
    sg90.write(pos);
    delay(50);
    ol();
  }
  for(pos = 135; pos <= 45; pos -= 15)
  {
    sg90.write(pos);
    delay(50);
    ol();
  }
  Serial.println("");
}

void ol()
{
  digitalWrite(trig, HIGH);
  delay(1000);
  digitalWrite(trig, LOW);
  
  sure = pulseIn(echo, HIGH);
  mesafe = (sure/2)/29.1;
  
  Serial.print("Distance: ");
  Serial.println(mesafe);
  
  if (mesafe <=5)
  {
    Serial.print("5cm");
    
    digitalWrite(led, HIGH);
    digitalWrite(buzz, HIGH);
    delay(50);
    
    digitalWrite(led, LOW);
    digitalWrite(buzz, LOW);
    delay(50);
  }
  else
  {
    Serial.print("clear");
    
    digitalWrite(led, HIGH);
    delay(300);
    digitalWrite(led, LOW);
  }
}
