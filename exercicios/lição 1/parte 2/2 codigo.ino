// C++ code
//
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(6, HIGH);  
  digitalWrite(5, LOW);
  delay(1000);
  digitalWrite(6, LOW); 
  digitalWrite(5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
