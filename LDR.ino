int light;
 int ledA = 8;
 int ledB = 9;
void setup() {
  Serial.begin(9600);
  pinMode(ledA,OUTPUT);
  pinMode(ledB,OUTPUT);
}

void loop() {
  light = analogRead(A0);
  if (light < 300){
    Serial.println(light);
    digitalWrite(ledB,HIGH);
    digitalWrite(ledA,LOW);
    delay(100);
  }else{
    Serial.println(light);
    digitalWrite(ledA,HIGH);
    digitalWrite(ledB,LOW);
    delay(100);
  }
}