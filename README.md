# Unib
Universidade Ibirapuera.

<h3>Projeto realizado dentro da Universidade Ibirapuera pelo os alunos do 6° semestre do curso de Ciencia da Computação.</h3>
<br/>

![alt text](https://i.ibb.co/WphkYdK/carrinho-Arduino.jpg)

<br/>
	
#	Relação de peças usadas
1.	Arduino Robo seguidor de linha com IOT
	- 1 Arduino uno R1.
	- 1 Modulo Wi-fi **Esp-01 Esp8266.**
	- 2 Motores DC Gearbox
	- 1 Driver Ponte **H L298N**
	- 3 Sensores Reflexivo Ótico modelo **Ir Tcrt5000.**
	- 1 kit de lego com 2 rodas.
	- 1 Rodízio Giratório (roda boba) com diametros **4 cm altura, 5cm comprimento, 3 largura.**
	- 2 Baterias de **9v recarregavel.**
	- 3 Led **1 - Vermelho, 1 - Azul e 1 - Verde**
	
#	Especificações peças usadas
1. 	**Arduino Uno R1**
	- Microcontrolador **ATmega328P**
	- Tensão de operação **5V USB**
	- Tensão de entrada Recomendada **7-12V**
	- Tensão de entrada Máxima **6-20V**
	- Pinos I/O  Digitais **14 (onde  6 são saídas PWM)**
	- Pinos Digitais  I/O PWM **6**
	- Pinos entrada Analogicos **6**
	- Corrente DC por Pino I/O **20 mA**
	- Corrente DC para Pino **3.3V	50 mA**
	- Flash Memory	32 KB **(ATmega328P)**
	- of which 0.5 KB used by bootloader
	- SRAM	2 KB **(ATmega328P)**
	- EEPROM 1 KB **(ATmega328P)**
	- Clock Speed **16 MHz**
	- LED_BUILTIN **13**
	- Altura **68.6 mm**
	- Comprimento **53.4 mm**
	- Peso **25 g**

2.	**Modulo Ir Tcrt5000**
	- Modulo sensor reflexivo infravermelho TCRT5000;
	- Distância de detecção: 1mm ~ 8 mm;
	- Tensão de trabalho: 3.3V-5V;
	- Saída Digital: TTL;
	- Dimensão: 32mm x 14 mm;
	- Utiliza comparador de tensão LM393.

3.	**PONTE H L298N**
	- Tensão de Operação: 4~35v
	- Chip: ST L298N (Datasheet)
	- Controle de 2 motores DC ou 1 motor de passo
	- Corrente de Operação máxima: 2A por canal ou 4A max
	- Tensão lógica: 5v
	- Corrente lógica: 0~36mA
	- Limites de Temperatura: -20 a +135°C
	- Potência Máxima: 25W
	- Dimensões: 43 x 43 x 27mm
	- Peso: 30g

4.	**Modulo Wi-fi Esp8266**
	- Conexão à redes padrão 802.11 B/G/N
	- Alcance aproximado: 91 metros
	- Tensão de operação : 3.3 VDC
	- Comunicação serial: pinos TX e RX
	- Modos de operação : Cliente, Access Point, Cliente+Access Point
	- Modos de segurança wireless : OPEN/WEP/WPA_PSK/WPA2_PSK/WPA_WPA2_PSK
	- Suporta comunicação TCP e UDP, com até 5 conexões simultâneas
	
#	Dificuldades na contrução
1.	Uma das maiores dificuldade foi a instalação dos motores e ligações com as portas PWM para controle de velocidade.
2.	Uma dificuldade tambem foi a ligação com o Modulo WI-FI **esp8266** e conseguir configurar para web serivce.
3.	Outra dificuldade foi a distancia dos Modulos **Tcrt5000** a distancia entre o chao e muito pequena.
4.	Instação das rodas de lego para ficar no centro da haste do motos assim a roda consegue ficar fixa e rodando certo.

#	Etapas do projeto
1.	Construção do chassi do robo em lego
2.	Instalação do moto DC no chassi do robo
3.	Instalação e ligação do modulo **PONTE H L298N** ao moto DC com controle de voltagem
4.	Ligação e programação do Modulo **Wi-fi Esp8266**
5.	Instalação e ligação dos modulos **Tcrt5000** para controle de linha assim conseguindo seguir a linha
6.	Teste em pista
7.	Projeto finalizado

   
   
   
   
   
   
   
   
   
   
   
   

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   