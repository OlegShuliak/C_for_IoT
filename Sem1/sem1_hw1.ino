// C++ code
//
int greenLed = 13;
int yellowLed = 12;
int redLed = 8;


void setup()
{
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop()
{
  digitalWrite(greenLed, HIGH);
  delay(5000); 
  digitalWrite(greenLed, LOW);
  delay(1000); 
  for (int i = 0; i < 3; i++){
  	digitalWrite(greenLed, HIGH);
  	delay(1000); 
  	digitalWrite(greenLed, LOW);
  	delay(1000);
  }
  digitalWrite(yellowLed, HIGH);
  delay(3000); 
  digitalWrite(yellowLed, LOW);
  delay(1000);
  digitalWrite(redLed, HIGH);
  delay(5000); 
  digitalWrite(redLed, LOW);
  delay(1000);
  digitalWrite(yellowLed, HIGH);
  delay(3000); 
  digitalWrite(yellowLed, LOW);
  delay(1000);
  
}