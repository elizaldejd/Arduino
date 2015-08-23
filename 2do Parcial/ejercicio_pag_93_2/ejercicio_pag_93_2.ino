void setup(){
Serial.begin(9600); 
pinMode(9,OUTPUT);
}

void loop() 
{

  int potenciometro=analogRead(A0);
  int intencidad;
  int foto=analogRead(A2);
  int conversion = 780 - foto;
  intencidad=map(potenciometro,0,1023,0,255);
  analogWrite(9,intencidad);
  Serial.println(conversion);
  
delay(10);

}
