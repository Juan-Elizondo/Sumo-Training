void setup() {
  // put your setup code here, to run once:
  
  pinMode(4,INPUT); //control pin for LED1
  pinMode(5,OUTPUT); // LED1 pin
  pinMode(6,INPUT); //control pin for LED2
  pinMode(7,OUTPUT); // LED2 pin
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int switch_state1 = digitalRead(4); //read the value of control input1
  int switch_state2 = digitalRead(6); //read the value of control input2

  if(switch_state1 == HIGH) //condition for LED1
  {
    digitalWrite(5,HIGH);//LED turns on if input is high
  }
  
  if(switch_state1 == LOW) // condition for LED1
  {
    digitalWrite(5,LOW);//LED turns off if input is low
  }
  
  if(switch_state2 == HIGH) //condition
  {
    digitalWrite(7,HIGH);//LED turns on if input is high
  }
  
  if(switch_state2 == LOW) // condition
  {
    digitalWrite(7,LOW);//LED turns off if input is low
  }
  
}
