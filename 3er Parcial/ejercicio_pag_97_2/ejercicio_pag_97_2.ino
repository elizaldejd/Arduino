int conta = 0; 
void setup(){
Serial.begin(9600);
pinMode(2,INPUT);
pinMode(4,INPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);

}
void loop(){
  int i=0;
  char valores;
  if(digitalRead(2) == HIGH ){
     if(digitalRead(2) == LOW ){
       conta++;
          Serial.println(conta);
          delay (100);
       }
  }


valores= Serial.read();

Serial.println(conta);

if(valores=='1'){
  while(conta>=i){
    digitalWrite(10,HIGH);
    delay(1000);
    digitalWrite(10,LOW);
    delay(1000);
    i++;
  }
  i=0;
  conta=0;
}
if(valores=='2'){
  while(conta>=i){
    digitalWrite(11,HIGH);
    delay(1000);
    digitalWrite(11,LOW);
    delay(1000);
    i++;
  }
  i=0;
  conta=0;
}


if(valores=='3'){
  while(conta>=i){
    digitalWrite(12,HIGH);
    delay(1000);
    digitalWrite(12,LOW);
    delay(1000);
i++;  
}
  i=0;
  conta=0;
}

delay(500);

}
