int led1=4;
int led2=5;
int led3=6;
int valor;
int i;
void setup(){
Serial.begin(9600); 
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
}

void loop(){
  
   valor = analogRead(A0);

if(valor>=0 && valor<=350){
i=100;
}else if(valor>=351 && valor<=700){
  i=500;
}else if(valor>=701 && valor<=1023){
  i=1000;
}

Serial.println(i);

digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
delay(i);

digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
delay(i);

}
