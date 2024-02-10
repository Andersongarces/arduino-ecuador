// C++ code
//

int red = 10;
int britghness1 = 10;
int britghness2 = 100;
int britghness3 = 200;
int britghness4 = 255;

int dt = 500;


void setup()
{
  
  pinMode(red, britghness1);
  pinMode(red, britghness2);
  pinMode(red, britghness3);
  pinMode(red, britghness4);
}

void loop()
{
  analogWrite(red, britghness1);
  delay(dt);
  analogWrite(red, britghness2);
  delay(dt);
  analogWrite(red, britghness3);
  delay(dt);
  analogWrite(red, britghness4);
  delay(dt);
};
