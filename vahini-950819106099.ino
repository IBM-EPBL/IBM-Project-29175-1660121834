// C++ code
//
int time;
int distance;
void setup()
{
 Serial.begin(9600);
 pinMode(2,INPUT);
 pinMode(3,OUTPUT);
 pinMode(10,OUTPUT);
 
}

void loop()
{
  digitalWrite (3, HIGH);
  delayMicroseconds (10);
  digitalWrite (3, LOW);
  time = pulseIn (2, HIGH);
  distance = (time * 0.034) / 2;
  if (distance <=10)
  {
    Serial.println (" LED ON");   
    Serial.print (" Distance= ");
    Serial.println (distance);
    digitalWrite(10,HIGH);
    delay(500);
  }
  else
  {
    Serial.println (" LED OFF");   
    Serial.print (" Distance= ");
    Serial.println (distance);
    digitalWrite(10,LOW);
    delay(500);
  }
}