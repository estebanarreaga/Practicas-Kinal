/*
 Fundacion Kinal
 Centro Educativo Tecnico Laboral Kinal
 Electronica
 Grado: Quinto
 Seccion: A
 Curso: Taller de electronica digital y reparacion de computadoras
 Nombre: Esteban Andres Rivas Arreaga
 Carnet: 2020198 
 */
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>                
#include <DallasTemperature.h>

#define ledsito1 3
#define ledsito2 4
#define ledsito3 5
//Constructores
OneWire ourWire(2);                
DallasTemperature sensorsito(&ourWire); 
LiquidCrystal_I2C lcdsito(0x27,16,2);

void setup() {
delay(1000);
lcdsito.init();
lcdsito.backlight();   //Inicio la comunicacion serial
sensorsito.begin();   //Se inicia el sensor
}
 
void loop() {
sensorsito.requestTemperatures();   //Se envía el comando para leer la temperatura
float temperaturita= sensorsito.getTempCByIndex(0); //Se obtiene la temperatura en ºC
float temperaturita1 = sensorsito.getTempFByIndex(0); //Se obtiene la temperatura en ºF

lcdsito.setCursor(0,0);
lcdsito.print("Temperatura= ");
lcdsito.setCursor(0,1);
lcdsito.print(temperaturita);
lcdsito.println("C"); 
lcdsito.setCursor(6,1); 
lcdsito.print(" ");
lcdsito.setCursor(7,1); 
lcdsito.print(" ");
lcdsito.setCursor(8,1); 
lcdsito.print(" ");
lcdsito.setCursor(9,1); 
lcdsito.print(temperaturita1);
lcdsito.println("F");
lcdsito.setCursor(15,1); 
lcdsito.print("  ");
delay(100);

if(temperaturita >=30){
  digitalWrite(ledsito1,HIGH);
  digitalWrite(ledsito2,LOW);
  digitalWrite(ledsito3,LOW);
}
if(temperaturita <=15){
  digitalWrite(ledsito1,LOW);
  digitalWrite(ledsito2,HIGH);
  digitalWrite(ledsito3,LOW);
}
if(temperaturita >15 && temperaturita <30){
  digitalWrite(ledsito1,LOW);
  digitalWrite(ledsito2,LOW);
  digitalWrite(ledsito3,HIGH);
}
}
