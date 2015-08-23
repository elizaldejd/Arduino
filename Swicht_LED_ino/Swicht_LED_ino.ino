           const int Boton = 12;  //Pin de entrada para conectar el boton 
           const int Led   = 9; //Pin de salida para conectar el LED
           const int Led2   = 2;
           int estadoBoton = 0;  
           int estadoLed   = 0;    

           int estadoAnterior = LOW;  

           void setup() {
             pinMode(Led, OUTPUT); 
             pinMode(Boton, INPUT);
           }

           void loop(){
             estadoBoton = digitalRead(Boton); 
             
             if ((estadoBoton == HIGH) && ( estadoAnterior == LOW)){
               estadoLed = 1 - estadoLed;   
             }

             estadoAnterior = estadoBoton; 

             if (estadoLed == 1) {
               digitalWrite(Led, HIGH); 

               } else {
                 
               digitalWrite(Led, LOW);
                  
               }
               
               if(estadoLed ==1){
                     digitalWrite(Led2, HIGH);
                     delay(1000);   
                 }
            }
