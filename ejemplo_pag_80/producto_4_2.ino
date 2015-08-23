int led = 8;
char leer;
boolean prendido=false;

void setup() 
{
Serial.begin(9600);
pinMode(led, OUTPUT);
}

void loop() 
{

leer=Serial.read();

if ( (leer=='a') && (prendido==false) )
{
digitalWrite(led,HIGH);
prendido=true;
}
else if ( (leer=='a') && (prendido==true) )
{
digitalWrite(led,LOW);
prendido=false;
}
}

