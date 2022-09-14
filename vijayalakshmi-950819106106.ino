// C++ code
//
int time;
int distance;
void setup()
{
 Serial.begin(9600);
 pinMode(2,INPUT);
 pinMode(4,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(12,OUTPUT);
 
}

void loop()
{
  digitalWrite (4, HIGH);
  delayMicroseconds (10);
  digitalWrite (4, LOW);
  time = pulseIn (2, HIGH);
  distance = (time * 0.034) / 2;
  if (distance <=20 && distance >=15)
  {
    digitalWrite(12,LOW);
    Serial.println (" LED ON");   
    Serial.print (" Distance= ");
    Serial.println (distance);
    digitalWrite(10,HIGH);
    delay(500);
  }
  else if(distance <=15)
  {
    digitalWrite(10,LOW);
    Serial.println (" LED OFF");   
    Serial.print (" Distance= ");
    Serial.println (distance);
    digitalWrite(12,HIGH);
    delay(500);
  }
  else{
    digitalWrite(10,LOW);
    digitalWrite(12,LOW);
  }
}