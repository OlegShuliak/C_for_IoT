// C++ code
//

int incomingByte;
int Led = 13;

void setup()
{
  Serial.begin(9600);
  pinMode(Led, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0){
    incomingByte = Serial.read();
    if (incomingByte == '1'){
      digitalWrite(Led, HIGH);
    } else if (incomingByte == '0'){
      digitalWrite(Led, LOW);
    }
  } 
}