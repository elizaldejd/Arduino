int boton1=2;
int boton2=3;
int led=7;
int led1=8;
int time=0;
int validacion=0;
int presiono2=0;
void setup(){
pinMode(boton1,INPUT);
pinMode(boton2,INPUT); 
pinMode(led,OUTPUT);
pinMode(led1,OUTPUT);
Serial.begin(9600);
}
void loop(){

if(digitalRead(boton1)==HIGH){
  time=time+10;
  Serial.print("Delay vale: ");
  Serial.println(time);
  digitalWrite(led,HIGH);
}
if(digitalRead(boton2)==HIGH&&time>0){
  validacion=1;
  Serial.print("Se inician parpadeo de led con delay de: ");
  Serial.print(time);
  Serial.println(" milisegundos.");
}
while(validacion==1){
  digitalWrite(led1,HIGH);
  delay(time);
  digitalWrite(led1,LOW);
  delay(time);
    if(digitalRead(boton1)==HIGH&&digitalRead(boton2)==LOW){
      Serial.print("Se aumento, ahora ");
      digitalWrite(led,LOW);  
      validacion=0;
    }
if(digitalRead(boton2)==HIGH&&digitalRead(boton1)==HIGH){
    time=0;
    validacion=0;
      Serial.print("Se reiniciaron los valores, time vale: ");
      Serial.println(time);
      digitalWrite(led,LOW);
      digitalWrite(led1,LOW);
}

}
delay(150); //Retardo para la visualización de datos en la consola
}

