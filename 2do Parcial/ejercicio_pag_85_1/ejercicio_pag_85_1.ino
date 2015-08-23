int brillo = 0;
int variacion = 5;
int led = 9;

void setup (){
pinMode(led, OUTPUT); 
}
void loop (){
  variacion = analogRead(A0);
  variacion = map(variacion, 0, 1023, 0, 255);
analogWrite(led, variacion);
delay (10); 
}
