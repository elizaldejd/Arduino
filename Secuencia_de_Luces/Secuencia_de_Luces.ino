           const int Boton = 12;   
           const int pinLed   =  9;
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
               digitalWrite(pinLed, HIGH); 
               } else {
               digitalWrite(pinLed, LOW);
               }
            }
