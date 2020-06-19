void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
  pinMode(3,OUTPUT);

  digitalWrite(6,LOW);
  digitalWrite(3,LOW);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  int motor_speed = 0;
  for(motor_speed = 20;motor_speed < 250;motor_speed++)
    { 
      analogWrite(6,motor_speed);
      digitalWrite(3,LOW);
      delay(100);
    }

    delay(500);

  for(motor_speed = 20;motor_speed < 250;motor_speed++)
    { 
      analogWrite(3,motor_speed);
      digitalWrite(6,LOW);
      delay(100);
    }

    delay(500);
  
}
