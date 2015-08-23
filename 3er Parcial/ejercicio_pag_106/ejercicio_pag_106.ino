int pulsador =7; 
int motor=3;

void setup(){
pinMode(pulsador,INPUT); 
pinMode(motor,OUTPUT);
}
void loop(){

if(digitalRead(pulsador) == HIGH){
digitalWrite(motor,HIGH); 
}else{ 
digitalWrite(motor,LOW);
}
}
