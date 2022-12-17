
#include <SoftwareSerial.h>
SoftwareSerial BlueTooth(11, 12);    // (TXD, RXD) of HC-06
char BT_input;                    // to store input character received via BT.
int speedpin=3;
int MotorRight1 = 5;                
int MotorRight2 = 6;                
int speedpin1=8;
int MotorLeft1 = 9;               
int MotorLeft2 = 10;               

void setup()  
{
  BlueTooth.begin(9600);  
  Serial.begin(9600);
  pinMode(speedpin,OUTPUT);
  pinMode(MotorRight1, OUTPUT);
  pinMode(MotorRight2, OUTPUT);
  pinMode(MotorLeft1, OUTPUT);
  pinMode(MotorLeft2, OUTPUT);
  pinMode(speedpin1,OUTPUT);
}

void loop() 
{
  if (BlueTooth.available())
  {
   BT_input=BlueTooth.read();
    if (BT_input=='U')
  {
    analogWrite(speedpin,100);
   analogWrite(speedpin1,100);   
digitalWrite(MotorRight1,HIGH);
digitalWrite(MotorRight2,LOW);
digitalWrite(MotorLeft1,LOW);
digitalWrite(MotorLeft2,LOW);
}
    else if (BT_input=='L')
  {
    analogWrite(speedpin,100);
   analogWrite(speedpin1,100);  
digitalWrite(MotorRight1,HIGH);
digitalWrite(MotorRight2,LOW);
digitalWrite(MotorLeft1,LOW);
digitalWrite(MotorLeft2,HIGH);
}


    else if (BT_input=='R')
 {
analogWrite(speedpin,100);
 analogWrite(speedpin1,100);  
digitalWrite(MotorRight1,HIGH);
digitalWrite(MotorRight2,LOW);
digitalWrite(MotorLeft1,HIGH);
digitalWrite(MotorLeft2,LOW);
}
  else if (BT_input=='D')
 {
analogWrite(speedpin,100);
 analogWrite(speedpin1,100);  
digitalWrite(MotorRight1,LOW);
digitalWrite(MotorRight2,HIGH);
digitalWrite(MotorLeft1,LOW);
digitalWrite(MotorLeft2,LOW);
}







   else if (BT_input=='X')
{
analogWrite(speedpin,100);
analogWrite(speedpin1,100);    
digitalWrite(MotorRight1,LOW);
digitalWrite(MotorRight2,LOW);
digitalWrite(MotorLeft1,LOW);
digitalWrite(MotorLeft2,LOW);
}
 
  } 
}
