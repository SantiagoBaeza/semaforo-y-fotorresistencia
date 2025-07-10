
int rojo = 2;
int amarillo = 3;
int verde = 4;

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  int luz = analogRead(A0);
  
  if(luz>102)//si es de dia... 
  {
    digitalWrite(amarillo, LOW);
  	digitalWrite(verde, HIGH);
    delay(3000);
    
    //parpadeo final verde
    digitalWrite(verde, LOW);
    delay(350);
    digitalWrite(verde, HIGH);
    delay(350);
    digitalWrite(verde, LOW);
    delay(350);
    digitalWrite(verde, HIGH);
    delay(350);
    digitalWrite(verde, LOW);
    delay(350);
    digitalWrite(verde, HIGH);
    delay(350);
    
    //cambio a rojo
    digitalWrite(verde, LOW);
    digitalWrite(amarillo, HIGH);
    delay(1000);
    digitalWrite(amarillo, LOW);
  	digitalWrite(rojo, HIGH);
    delay(3000);
    
    //parpadeo final rojo
    digitalWrite(rojo, LOW);
    delay(350);
    digitalWrite(rojo, HIGH);
    delay(350);
    digitalWrite(rojo, LOW);
    delay(350);
    digitalWrite(rojo, HIGH);
    delay(350);
    digitalWrite(rojo, LOW);
    delay(350);
    digitalWrite(rojo, HIGH);
    delay(350);
    
    //cambio a verde
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, HIGH);
    delay(1000);
    
  }else{ //si es de noche...
  	digitalWrite(amarillo, HIGH);
    delay(500);
    digitalWrite(amarillo, LOW);
    delay(500);
  }
}