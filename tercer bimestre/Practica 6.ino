/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Esteban Andres Rivas Arreaga
 * Carnet: 2020198
 * Proyecto: practica 6
*/

#include <SparkFun_ADXL345.h>
#include <SPI.h>
#include <Wire.h>
#include <LedControl.h>

#define entradita   12   //pin 12 conectado al pin de datos del max7219.
#define clocksito 11   //pin 11 conectado al pin de clock del max7219.
#define cs  10   //pin 10 conectado al pin de carga del max7219.

LedControl matricita = LedControl(entradita,clocksito,cs,1);
ADXL345 acelerometrin = ADXL345();

byte circulito1[8]= {        // array que contiene todos los elementos de las
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00011000,
  B00000000,
  B00000000,
  B00000000
};
byte circulito2[8]= {       // array que contiene todos los elementos de las
  B00000000,
  B00000000,
  B00000000,
  B11000000,
  B11000000,
  B00000000,
  B00000000,
  B00000000
};

byte circulito3[8]= {       // array que contiene todos los elementos de las
  B00000000,
  B00000000,
  B00000000,
  B00000011,
  B00000011,
  B00000000,
  B00000000,
  B00000000
};

unsigned long delaycito = 10;

void setup() {
  Serial.begin(9600);
  Serial.println("iniciar");
  Serial.println();
  acelerometrin.powerOn();
  acelerometrin.setRangeSetting(8);
  matricita.shutdown(0,false); //Activo el max7219 para poder mostrar los digitos.
  matricita.setIntensity(0,15);  //Brilo a la mitad 
  matricita.clearDisplay(0); 
}

void loop() {
cosito();
}


void cosito(){
int x,y,z;
acelerometrin.readAccel(&x,&y,&z);
Serial.print("X:");
Serial.print(x);
Serial.print("; ");
Serial.print("y:");
Serial.print(y);
Serial.println("");
delay(80);
if(x==0 && y>=3 && y<=5){
  for(int i=0; i<8;i++)
      {
        matricita.setRow(0,i,circulito1[i]);
      }  
} 
delay(delaycito);
if(x>=-30 && y>=3 && x<=-1 && y<=14){
  for(int i=0; i<8;i++)
      {
        matricita.setRow(0,i,circulito3[i]);
      }  
}
delay(delaycito); 
if(x>=2 && y>=-63 && x<=031 && y<=61){
  for(int i=0; i<8;i++)
      {
        matricita.setRow(0,i,circulito2[i]);
      }  
} 
delay(delaycito);
}
