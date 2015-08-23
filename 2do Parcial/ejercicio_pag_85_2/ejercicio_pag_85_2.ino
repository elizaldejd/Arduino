int led = 9;
int limit=0;
int limit2=1;

char valores;
String intencidad;
int intencidad2;
int time2;
String time;

void setup (){
pinMode(led, OUTPUT);
Serial.begin(9600);
}

void loop (){

while(!Serial.available()){
}

  valores=Serial.read();

    if(valores==','){
      limit=1;
      limit2=0;
    }
    
    if(limit==0){
      intencidad = intencidad+valores;
    }
    if(limit2==0){
      if(valores!=','){
        time=time+valores;
      }
    }
    
    intencidad2 = intencidad.toInt();
    time2= time.toInt();
    
    if(valores=='\n'){ 
      Serial.print("La intencidad vale: "); 
      Serial.println(intencidad2);
      Serial.print("El time vale: "); 
      Serial.println(time2);
      
      analogWrite(led,intencidad2);
      delay(time2*1000);
      analogWrite(led,time2*0);

      limit=0;
      limit2=1;
      intencidad='\0';
      time='\0';
      }
      
delay (2);

}
