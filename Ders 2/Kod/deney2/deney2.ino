#define led 10
#define buton 8

int buton_durumu =0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(buton, INPUT);
}

void loop()
{
  buton_durumu = digitalRead(buton);
  
  if(buton_durumu == 1){
    digitalWrite(led, HIGH);
  }
  else{
  digitalWrite(led, LOW);
  }
}
