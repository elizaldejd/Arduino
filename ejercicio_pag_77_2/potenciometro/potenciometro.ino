int boton1=2;
int led1=8;
int bloqueo=0;
int boton=0;
int encendido=0;

void setup(){
pinMode(boton1,INPUT);
pinMode(led1,OUTPUT);
Serial.begin(9600); //Inicia comunicación serial
}

void loop() // Esta funcion se mantiene ejecutando
{
int secreto =50;
int valor= analogRead(A0);
valor = map(valor, 0, 1023, 0, 1000);

  if((valor>=(secreto-10))&&(valor<=(secreto+10))){
    Serial.print("Puedes desbloquear el valor es: ");
    Serial.println(valor);
    bloqueo=1;
  }else{
    bloqueo=0;
    Serial.println(valor);
  }

  while(bloqueo==1){

    int valor= analogRead(A0);
    valor = map(valor, 0, 1023, 0, 1000);

        if((valor>=(secreto-10))&&(valor<=(secreto+10))){
        Serial.print("Puedes desbloquear el valor es: ");
        Serial.println(valor);
        bloqueo=1;
        }else{
        bloqueo=0;          
        encendido=0;
        digitalWrite(led1,LOW);
        }
        
        if(digitalRead(boton1)==HIGH){
        encendido=1;
        }
        
        if(encendido==1){
        digitalWrite(led1,HIGH);
        }
        
  delay(500);
  }

delay(500);
}
