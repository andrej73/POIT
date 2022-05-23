void setup()
{
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  float value, voltage1, voltage2;
  
  voltage1=(float)analogRead(A0)*5/1023;
  voltage2=(float)analogRead(A1)*5/1023;
  
  delay(100);

  analogWrite(3, HIGH);
  delay(100);
  
  Serial.println(float(voltage1-voltage2));

  if(Serial.read() != -1){
    value = Serial.read();
  }  
}
