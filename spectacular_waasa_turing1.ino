int red=13;
int yellow=8;
int green=12;

void setup()
{
  pinMode(red, OUTPUT);
   pinMode(yellow, OUTPUT);
   pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  delay(2000); 
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  delay(1000); 
  digitalWrite(yellow, LOW);
  digitalWrite(green,HIGH);
  delay(2000); 
}