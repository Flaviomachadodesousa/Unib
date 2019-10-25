//Fonte: https://www.robocore.net/tutoriais/robo-seguidor-de-linha
//OU https://portal.vidadesilicio.com.br/robo-seguidor-de-linha-sensor-infravermelho-e-pwm/
//	Motores
const int motorA = 5; //velocidade motor A - de 0 a 255
const int motorB = 6; //velocidade motor B - de 0 a 255
const int dirA = 7; //direcao do motor A - HIGH ou LOW
const int dirB = 8; //direcao do motor B - HIGH ou LOW  
//	Sensores
int Sensor1 = 3;
int Valor_Sensor1 = 0; 
int Sensor2 = 4; 
int Valor_Sensor2 = 0;

void setup(){
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);
  pinMode(dirA, OUTPUT);
  pinMode(dirB, OUTPUT);
  digitalWrite(dirA, HIGH); 
  digitalWrite(dirB, HIGH);
}

void loop(){
  Valor_Sensor1 = analogRead(Sensor1); 
  Valor_Sensor2 = analogRead(Sensor2); 
  
  if((Valor_Sensor1 > 700) && (Valor_Sensor2 > 700)){
  	analogWrite(motorA, 150); 
  	analogWrite(motorB, 150);
  }
  
  if((Valor_Sensor1 < 700) && (Valor_Sensor2 > 700)){
    analogWrite(motorA, 0); 
  	analogWrite(motorB, 200);
  }
  
  if((Valor_Sensor1 > 700) && (Valor_Sensor2 < 700)){
    analogWrite(motorA, 200); 
  	analogWrite(motorB, 0);
  }  
  
}