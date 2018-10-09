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
    digitalWrite(5,HIGH);
    delay(1000);          //if input is high the LED will be on for 1sec and off for 1sec
    digitalWrite(5,LOW);
    delay(1000);
  }
  
  if(switch_state == LOW) // condition
  {
    digitalWrite(5,HIGH);
    delay(500);          // if input is low the LED will be on for .5sec and off for .5sec
    digitalWrite(5,LOW);
    delay(500);
  }
}
