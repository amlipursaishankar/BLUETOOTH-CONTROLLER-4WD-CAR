#include<SoftwareSerial.h>
SoftwareSerial mySerial(0,1);
int command;
void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
  Serial.println("You're connected via bluetooth");
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  
}
void loop()
{
  if (mySerial.available())
  {
    command=(mySerial.read());
    if(command=='F')
    {
      Serial.println("Forward");
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW);
      
    }
    else if(command=='B')
    {
      Serial.println("Reverse");
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(10,HIGH);
      
    }
    else if(command=='L')
    {
      Serial.println("Left");
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW);
      
    }
    else if(command=='R')
    {
      Serial.println("Right");
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
      }
      else if(command=='S')
      {
        Serial.println("Stop");
        digitalWrite(13,LOW);
        digitalWrite(12,LOW);
        digitalWrite(11,LOW);
        digitalWrite(10,LOW);
        
      }
      delay(30);
      
  }
}
