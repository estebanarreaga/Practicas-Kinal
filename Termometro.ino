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
OneWire ourWire(2);                //Se establece el pin 2  como el pin que utilizaremos para el protocolo OneWire
DallasTemperature sensors(&ourWire); //Se declara una objeto para nuestro sensor
LiquidCrystal_I2C lcdsito(0x27,16,2);

void setup() {
delay(1000);
lcdsito.init();
lcdsito.backlight();   //Inicio la comunicacion serial
sensors.begin();   //Se inicia el sensor
}
 
void loop() {
sensors.requestTemperatures();   //Se envía el comando para leer la temperatura
float temperaturita= sensors.getTempCByIndex(0); //Se obtiene la temperatura en ºC
float temperaturita1 = sensors.getTempFByIndex(0); //Se obtiene la temperatura en ºF

lcdsito.setCursor(0,0);
lcdsito.print("Temperatura= ");
lcdsito.setCursor(0,1);
lcdsito.print(temperaturita);
lcdsito.println("C"); 
lcdsito.setCursor(9,1); 
lcdsito.print(temperaturita1);
lcdsito.println("F");
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
