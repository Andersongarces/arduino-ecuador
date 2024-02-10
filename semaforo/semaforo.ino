// C++ code
//

int x = 50;
int y = 5;
int pin1 = 13;
int pin2 = 12;
int pin3 = 11; 

void setup()
{
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
}

void loop()
{
  digitalWrite(pin1, HIGH);
  delay(x);
  digitalWrite(pin1, LOW);
  delay(x); 
  digitalWrite(pin2, HIGH);
  delay(x);
  digitalWrite(pin2, LOW);
  delay(x); 
  digitalWrite(pin3, HIGH);
  delay(x);
  digitalWrite(pin3, LOW);
  delay(x); 
  
}
