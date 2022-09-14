// C++ code
//
int time;
int distance;
void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  pinMode(12,OUTPUT);
}

void loop()
{
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);
  time = pulseIn(3,HIGH);
  distance = (time * 0.034)/2;
  if(distance <=10){
    Serial.println("Door Open");
    Serial.println("Distance = ");
    Serial.print(distance);
    digitalWrite(12,HIGH);
    delay(500);
  }
  else{
    Serial.println("Door Closed");
    Serial.println("Distance = ");
    Serial.print(distance);
    digitalWrite(12,LOW);
    delay(500);
  }
}