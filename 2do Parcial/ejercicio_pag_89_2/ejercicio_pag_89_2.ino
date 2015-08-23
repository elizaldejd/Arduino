int led[]={2,3,4,5,6};
int valor;
int i;

void setup(){
Serial.begin(9600); 

  for(i=0;i<=4;i++){
    pinMode(led[i],OUTPUT);
  }
}

void loop(){

  valor= map(analogRead(A0),0,1023,0,5);
    Serial.println(valor);
    for(i=0;i<valor;i++){
      digitalWrite(led[i],HIGH);
    }
    
    for(i=valor;i<=5;i++){
      digitalWrite(led[i],LOW);
    }
delay(10);
}
