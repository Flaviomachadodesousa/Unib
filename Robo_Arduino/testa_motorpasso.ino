#include <Stepper.h> 
 
const int stepsPerRevolution = 500; 
  
//Inicializa a biblioteca utilizando as portas de 8 a 11 para 
//ligacao ao motor 

Stepper myStepper1(stepsPerRevolution, 8,10,9,11); 
Stepper myStepper2(stepsPerRevolution, 4,6,5,7);

void setup() 
{ 
 //Determina a velocidade inicial do motor 
 myStepper1.setSpeed(60);
 myStepper2.setSpeed(60);
} 
  
void loop() 
{ 
 //Gira o motor no sentido horario a 90 graus
 for (int i = 0; i<=3; i++)
 {
 myStepper1.step(-512);
 myStepper2.step(-512); 
 delay(2000);
 }
  
 //Gira o motor no sentido anti-horario a 120 graus
 for (int i = 0; i<=2; i++)
 {
 myStepper1.step(682);
 myStepper2.step(682); 
 delay(2000);
 }
 
 //Gira o motor no sentido horario, aumentando a
 //velocidade gradativamente
 for (int i = 10; i<=60; i=i+10)
 {
 myStepper1.setSpeed(i);
 myStepper1.step(40*i);
 myStepper2.setSpeed(i);
 myStepper2.step(40*i);
 }
 delay(2000);
}
