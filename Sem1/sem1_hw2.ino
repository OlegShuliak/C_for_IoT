// C++ code
//

int button = 2;
int greenLed = 8;
int yellowLed = 12;
int redLed = 13;

void setup()
{
  pinMode(button, INPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop()
{
  if (digitalRead(button) == LOW){
  	digitalWrite(greenLed, HIGH);
  } else {
  	delay(2000);
    digitalWrite(greenLed, LOW);
    delay(1000);
    for (int i =0; i < 3; i++){
      	digitalWrite(yellowLed, HIGH);
      	delay(1000);
        digitalWrite(yellowLed, LOW);
      	delay(1000);
    }
    digitalWrite(redLed, HIGH);
    delay(5000);
    digitalWrite(redLed, LOW);
    delay(1000);
    digitalWrite(greenLed, HIGH);
    delay(5000);
  }
}