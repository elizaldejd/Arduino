int led1 = 8;
int led2 = 9;
int led3 = 10;
char leer;
int serie2=0;
boolean prendido=false;

void setup() 
{
Serial.begin(9600);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

void loop() 
{
  
    leer=Serial.read();
 
  if(leer=='a'){
  serie2=1;
  }else if(leer=='b'){
  serie2=2;
  }
  
while(serie2==1){

  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  
  leer=Serial.read();
  
  if(leer=='a'){
  serie2=0;
  }else if(leer=='c'){
    serie2=0;
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }

}

while(serie2==2){

  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led3,LOW);
  
  leer=Serial.read();
  
  if(leer=='a'){
  serie2=0;
  }else if(leer=='c'){
    serie2=0;
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }

}

}

