#include<Servo.h>
Servo s;
int t=3;
int e=2;
int i=4;
void setup()
{
  Serial.begin(9600);
  pinMode(t,OUTPUT);
  pinMode(e,INPUT);
  pinMode(i,INPUT);
  pinMode(6,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(7,OUTPUT);
  s.attach(7);
}
void loop()
{
  digitalWrite(t,LOW);
  digitalWrite(t,HIGH);
  delayMicroseconds(10);
  digitalWrite(t,LOW);
  float dur=pulseIn(e,1);
  float dis=(dur*0.0343)/2;
  Serial.print("Distance:");
  Serial.println(dis);
  if(dis<50)
  {
   digitalWrite(13,1);
   delay(1000);
  int p=digitalRead(4);
  Serial.print("Door status:");
  Serial.println(p);
  for(int j=p;j==1;j++)
  {
    tone(6,j);
    delay(1000);
    noTone(6);
   
  }
  double a=analogRead(A0);
  double c=(((a/1024)*5)-0.5)*100;
  Serial.print("Temp Value: ");
  Serial.println(c);
  Serial.print("\n");
   if(c>90)
   {
     s.write(0);
     delay(1000);
     s.write(7);
     delay(1000);
     s.write(135);
     delay(1000);
     s.write(180);
     delay(1000);
   }
  }
   else
  { 
    digitalWrite(13,0);
  delay(1000);
   }
  
  
}