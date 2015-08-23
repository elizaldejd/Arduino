int conta = 0; 
void setup(){
Serial.begin(9600);
pinMode(2,INPUT);
pinMode(4,INPUT);
pinMode(10,OUTPUT);

}
void loop(){
  int i=0;
  if(digitalRead(2) == HIGH ){
     if(digitalRead(2) == LOW ){
       conta++;
          Serial.println(conta);
          delay (100);
       }
  }

if(digitalRead(4)==HIGH){

  while(conta>=i){
    Serial.println(i);
    digitalWrite(10,HIGH);
    delay(1000);
    digitalWrite(10,LOW);
    delay(1000);
    i++;
  }
  i=0;
  conta=0;
}
}
