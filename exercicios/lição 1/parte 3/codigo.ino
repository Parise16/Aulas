// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH); 
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(5,HIGH);
  delay(500); 
  digitalWrite(6,HIGH);
  delay(500); 
  digitalWrite(9,HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(10,HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW); 
  digitalWrite(5, LOW); 
  digitalWrite(6, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(10, LOW);
  delay(500);
}
