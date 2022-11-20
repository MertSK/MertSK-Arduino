#include <Servo.h>

int potPin = A0; 
Servo servoM;  
int pos = 0; 
  
void setup() {
  servoM.attach(9);  
}

void loop() {
  pos = analogRead(potPin);
  pos = map(pos, 0, 1023, 0, 180);
  servoM.write(pos);              
  delay(15);    
}
