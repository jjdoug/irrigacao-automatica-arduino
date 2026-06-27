#define pinoAnalog A0 
#define pinoRele 8 
#define pino5V 7

int ValAnalogIn; 

void setup() {
Serial.begin(9600); 

pinMode(pinoRele, OUTPUT);
pinMode(pino5V, OUTPUT); 
digitalWrite(pino5V, HIGH); 
}

void loop() {
ValAnalogIn = analogRead(pinoAnalog);
int Porcento = map(ValAnalogIn, 1023, 0, 0, 100);

Serial.print(Porcento); 
Serial.println("%");

if (Porcento <= 45) { 
Serial.println("Irrigando a planta ..."); 
digitalWrite(pinoRele, HIGH); 
}

else { // Se não ...
Serial.println("Planta Irrigada ..."); 
digitalWrite(pinoRele, LOW); 
}
delay (1000);
}
