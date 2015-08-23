int led = 9;
int val[2];
int bandera = 0;
void setup() {                
  pinMode(led, OUTPUT);
  Serial.begin(9600);  
}

void loop() {
  if (Serial.available() > 0) {
    val[bandera] = Serial.parseInt();
    bandera++;
    if(bandera >= 2)
    {
      bandera = 0;
      analogWrite(led,val[0]);
      delay(val[1]*1000);
      digitalWrite(led,0);
    }
  }
}
