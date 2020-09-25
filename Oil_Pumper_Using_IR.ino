

void setup()
{ Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(2,OUTPUT);
}

void loop() 
{
  digitalWrite(2,LOW);
  int press=analogRead(A0);
  Serial.println(press);
  
  if(press > 100)
  {
    delay(500);
    digitalWrite(2,HIGH);
    Serial.println("Switch ON");
    delay(75);
    digitalWrite(2,LOW);
    delay(5000);
    
      
  }  
}
