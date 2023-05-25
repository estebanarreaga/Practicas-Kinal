/*
 Fundacion Kinal
 Centro Educativo Tecnico Laboral Kinal
 Electronica
 Grado: Quinto
 Seccion: A
 Curso: Taller de electronica digital y reparacion de computadoras
 Integrantes: Esteban Andres Rivas Arreaga 2020198, Josué David Alvizuris Pérez 2022041, Diego Rodolfo Revolorio Lico 2019046, Edgar Emanuel Gálvez Bol 2019253 
 Grupo: 4
 */

// Pines a los que están conectando los leds
#define LEDR 2 
#define LEDG 3 
#define LEDR2 4
#define LEDG2 5 
#define LEDR3 6 
#define LEDG3 7 
#define LEDR4 8 
#define LEDG4 9 
int LDR=0;//Pin analógico para la fotoresistencia 1
int valorLDR=0;//Almacena el valor leído de la fotoresistencia 1
int LDR2=1;//Pin analógico para la fotoresistencia 2
int valorLDR2=0;//Almacena el valor leído de la fotoresistencia 2
int LDR3=2;//Pin analógico para la fotoresistencia 3
int valorLDR3=0;//Almacena el valor leído de la fotoresistencia 3
int LDR4=3;//Pin analógico para la fotoresistencia 4
int valorLDR4 = 0;//Almacena el valor leído de la fotoresistencia 4
int Luz=900; //Umbral de luz para la fotoresistencia 1
int Luz2=900;//Umbral de luz para la fotoresistencia 2
int Luz3=900;//Umbral de luz para la fotoresistencia 3
int Luz4=900;//Umbral de luz para la fotoresistencia 4


void setup(){
  //define los leds como salidas
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDR2, OUTPUT);
  pinMode(LEDG2, OUTPUT);
  pinMode(LEDR3, OUTPUT);
  pinMode(LEDG3, OUTPUT);
  pinMode(LEDR4, OUTPUT);
  pinMode(LEDG4, OUTPUT);
}
void loop(){
  parqueo1();//Función de control para el parqueo 1
  parqueo2();//Función de control para el parqueo 2
  parqueo3();//Función de control para el parqueo 3
  parqueo4();//Función de control para el parqueo 4
}

void parqueo1(){
   valorLDR=analogRead(LDR);//Lee el valor de la fotoresistencia 1
   if (valorLDR <= Luz){//Compara el valor leído con el umbral de luz
   digitalWrite(LEDR,LOW);//para que el led rojo este apagado
   digitalWrite(LEDG,HIGH);//para que el led verde este encendido
  }
  else{
   digitalWrite(LEDR,HIGH);//para que el led rojo este encendido
   digitalWrite(LEDG,LOW);//para que el led verde este apagado
  }
}
void parqueo2(){
  valorLDR2=analogRead(LDR2);//Lee el valor de la fotoresistencia 2
  if (valorLDR2 <= Luz2){//Compara el valor leído con el umbral de luz
   digitalWrite(LEDR2,LOW);//para que el led rojo este apagado
   digitalWrite(LEDG2,HIGH);//para que el led verde este encendido
  }
  else{
   digitalWrite(LEDR2,HIGH);//para que el led rojo este encendido
   digitalWrite(LEDG2,LOW);//para que el led verde este apagado
  }
}
void parqueo3(){
  valorLDR3=analogRead(LDR3);//Lee el valor de la fotoresistencia 3
  if (valorLDR3 <= Luz3){//Compara el valor leído con el umbral de luz
   digitalWrite(LEDR3,LOW);//para que el led rojo este apagado
   digitalWrite(LEDG3,HIGH);//para que el led verde este encendido
  }
  else{
   digitalWrite(LEDR3,HIGH);//para que el led rojo este encendido
   digitalWrite(LEDG3,LOW);//para que el led verde este apagado
  }
}
void parqueo4(){
  valorLDR4=analogRead(LDR4);//Lee el valor de la fotoresistencia 4
  if (valorLDR4 <= Luz4){//Compara el valor leído con el umbral de luz
   digitalWrite(LEDR4,LOW);//para que el led rojo este apagado
   digitalWrite(LEDG4,HIGH);//para que el led verde este encendido
  }
  else{
   digitalWrite(LEDR4,HIGH);//para que el led rojo este encendido
   digitalWrite(LEDG4,LOW);//para que el led verde este apagado
  }
}
