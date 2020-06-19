void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(4,OUTPUT);

  digitalWrite(6,LOW);
  digitalWrite(4,LOW);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(13,HIGH);
  digitalWrite(4,LOW);
  delay(500);

  digitalWrite(4,HIGH);
  digitalWrite(13,LOW);
  delay(500);
  
}
