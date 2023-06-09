/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Esteban Andres Rivas Arreaga
 * Carnet: 2020198
 * Proyecto: ohmimetro
*/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define res  A0
int valor = 0;
int Vin = 5;
float Vout = 0;
float R1 = 1000;
float R2 = 0;
float buffer = 0;

LiquidCrystal_I2C lcdsito(0x27,16,2);
void setup()
{
Serial.begin(9600);
lcdsito.init();
lcdsito.backlight(); 
}

void loop()
{
valor = analogRead(res);
  if(valor){
    buffer = valor * Vin;
    Vout = (buffer)/1024.0;
    buffer = (Vin/Vout) - 1;
    R2= R1 * buffer;
    lcdsito.setCursor(0,0),
    lcdsito.print("Vout: ");
    lcdsito.setCursor(5,0);
    lcdsito.print(Vout);
    lcdsito.print("ohms");
    lcdsito.setCursor(0,1);
    lcdsito.print("R2: ");
    lcdsito.setCursor(3,1);
    lcdsito.print(R2);
    lcdsito.print("ohms");
    delay(1000);
}
}
