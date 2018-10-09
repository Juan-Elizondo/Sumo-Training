void setup() {
  // put your setup code here, to run once:
  
  pinMode(4,INPUT); //switch pin
  pinMode(5,OUTPUT); // LED pin
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int  switch_state = digitalRead(4); //read the value of the input

  if(switch_state == HIGH) //condition
  {
    digitalWrite(5,HIGH);//LED turns on if input is high
  }
  
  if(switch_state == LOW) // condition
  {
    digitalWrite(5,LOW);//LED turns off if input is low
  }
}
