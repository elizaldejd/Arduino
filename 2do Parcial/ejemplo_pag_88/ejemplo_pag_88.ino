void setup() 
{
Serial.begin(9600); 
pinMode(9,OUTPUT); 
}

void loop() 
{
int valor = analogRead(A0);
Serial.println(valor);

if (valor >= 500)
{
digitalWrite(9,HIGH); 
}
else
{
digitalWrite(9,LOW); 
}

delay(100);

}
