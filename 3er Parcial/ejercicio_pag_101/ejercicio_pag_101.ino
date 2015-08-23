int act=123,desc=321,led[]={1,2,3},alarma=8,pass=0,intruso=0;

void setup() {

for(int x=1;x<=3;x++){
  pinMode(led[x],OUTPUT);
}
pinMode(alarma,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
while(Serial.available()>0){
int actint=Serial.parseInt();
if (act==actint){
Serial.println("Alarma activada."); alarmact();}
}
}
}
void alarmact(){
  while(pass!=321){
          if(digitalRead(alarma)==LOW){
          intruso=1;
          }
        while(Serial.available()<0){}
            pass=Serial.parseInt();

      if(intruso==1){
        Serial.println("Presencia de extranio,sistema disparado");
          digitalWrite(led[2],HIGH);
          digitalWrite(led[0],HIGH);
            delay(1000);
          digitalWrite(led[0],LOW);
          digitalWrite(led[1],HIGH);
            delay(1000);
          digitalWrite(led[1],LOW);
      }
  }
Serial.println("Alarma desactivada");
digitalWrite(led[2],LOW);
pass=0;
intruso=0;
}
