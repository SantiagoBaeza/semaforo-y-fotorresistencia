
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
  
  if(luz>102)//mientra sea de dia 
  {
    digitalWrite(amarillo, LOW);
  	digitalWrite(verde, HIGH);
    delay(2000);
    digitalWrite(verde, LOW);
    digitalWrite(amarillo, HIGH);
    delay(500);
    digitalWrite(amarillo, LOW);
    digitalWrite(rojo, HIGH);
    delay(2000);
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, HIGH);
    delay(500);
  }else{ //de lo contrario seria de noche
  	digitalWrite(amarillo, HIGH);
    delay(500);
    digitalWrite(amarillo, LOW);
    delay(500);
  }
}