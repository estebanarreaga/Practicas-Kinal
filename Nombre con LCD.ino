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

#include <LiquidCrystal.h>
#define RS  2
#define en 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7

//Constructor
LiquidCrystal lcdsito(RS, en, D4, D5, D6, D7); //Constructor que me permite usar la LCD
void setup()
{
  lcdsito.begin(16,2); //Objeto de una LCD de 16 columnas x 2 filas
  lcdsito.print("Esteban");
  lcdsito.setCursor(0,1);
  lcdsito.print("2020198");
}

void loop()
{
}
