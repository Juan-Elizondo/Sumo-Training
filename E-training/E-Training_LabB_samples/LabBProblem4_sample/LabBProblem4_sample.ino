
int counter = 0; // initializing counter as a global variable, meaning that all functions in the program have access to this variable
  
void setup() {
  // put your setup code here, to run once:

  pinMode(4,INPUT); //input
  pinMode(5,OUTPUT); //LED1 pin
  pinMode(6,OUTPUT); // LED2 pin
  pinMode(7,OUTPUT); // LED3 pin

  digitalWrite(5,LOW); // initialize the LEDs
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int input_pin = digitalRead(4); // check input
  
  if(input_pin == 1) // only enters if the input is held high
  {
    while(input_pin == 1)
    {
      input_pin = digitalRead(4); // program will wait for the pin to go low
    }
    
    counter = counter + 1;
    
    if(counter == 8)
    {
      counter = 0; // counter ranges from 0 to 7 so we reset it if it goes over
    }
  }

  // this is for the binary counter
  
  if(counter == 0)
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }
  
  if(counter == 1)
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
  }
  
  if(counter == 2)
  {
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
  }
  
  if(counter == 3)
  {
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
  }
  
  if(counter == 4)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }
  
  if(counter == 5)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
  }
  
  if(counter == 6)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
  }
  
  if(counter == 7)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
  }
  
  delay(500);
}
