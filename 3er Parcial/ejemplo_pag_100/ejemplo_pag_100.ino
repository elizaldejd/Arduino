int contacto = 2;
int led= 13;
void setup(){
pinMode(contacto,INPUT);
pinMode(led, OUTPUT);
}

void loop(){

  if (digitalRead(contacto)==LOW){

      for(int a=0; a<50; a++){
        digitalWrite(led,HIGH);
         delay(50);
        digitalWrite(led,LOW);
         delay(50);
      }
  }else{
    digitalWrite(led,LOW);
  }
}
