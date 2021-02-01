#include<Servo.h>
Servo serv;
int const Pin=A0;
int potenciometro;
int angulo;

void setup(){
  serv.attach(8);
  Serial.begin(9600);
}

void loop(){
  potenciometro = analogRead(Pin);
  angulo = map(potenciometro,0,1023,0,180);
  serv.write(angulo);
  delay (500);
}