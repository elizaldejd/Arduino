gvoid setup(){
Serial.begin(9600); //Inicia comunicación serial
}

void loop() // Esta funcion se mantiene ejecutando
{
int valor= analogRead(A0);
valor = map(valor, 0, 1023, 0, 10);
Serial.println(valor);

delay(500);
}
