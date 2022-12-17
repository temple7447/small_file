#define RELAY1  7    
char readSerial;                    
void setup()
{
  Serial.begin(9600);
  pinMode(RELAY1, OUTPUT);
}
void loop(){
  char readSerial;
 // delay(1000);
  if(Serial.available()>0){
      readSerial = Serial.read();
      delay(100);
      Serial.println(readSerial);
      if(readSerial == '1'){
        //Serial.println("ASDF");
        digitalWrite(RELAY1,HIGH);
      }
      if(readSerial == '0'){
        digitalWrite(RELAY1,LOW);;
      }
  }
   
}