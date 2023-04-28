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
#define trigger 9   
#define echo    10
#define RS  2
#define en  3
#define D4  4
#define D5  5
#define D6  6
#define D7  7
#define buzzersito 11

byte de_pie[] = {
  B01110,
  B01110,
  B01110,
  B00100,
  B00100,
  B01110,
  B00100,
  B01010
};
byte de_rodillas[] = {
  B01110,
  B01110,
  B01110,
  B00100,
  B00111,
  B00100,
  B01110,
  B11010
};

int contar = 0;

//Constructor
LiquidCrystal lcdsito(RS, en, D4, D5, D6, D7); //Constructor que me permite usar la LCD
void setup()
{
  lcdsito.begin(16,2); //Objeto de una LCD de 16 columnas x 2 filas
  lcdsito.print("0");
  lcdsito.createChar(1,de_pie);
  lcdsito.createChar(2,de_rodillas);
  lcdsito.setCursor(0,0);
  pinMode(trigger, OUTPUT);
  pinMode(echo,INPUT);
}

void loop()
{
    int distancin=dis();
  
    if(distancin >= 6 && distancin <= 10){
     contar++;
     switch(contar){
      case 1:
       lcdsito.setCursor(0,0);
       lcdsito.print("1");
       break;
      case 2:
       lcdsito.setCursor(0,0);
       lcdsito.print("2");
       break;
      case 3:
       lcdsito.setCursor(0,0);
       lcdsito.print("3");
       break;
      case 4:
       lcdsito.setCursor(0,0);
       lcdsito.print("4");
       break;
      case 5:
       lcdsito.setCursor(0,0);
       lcdsito.print("5");
       break;
      case 6:
       lcdsito.setCursor(0,0);
       lcdsito.print("6");
       break;
      case 7:
       lcdsito.setCursor(0,0);
       lcdsito.print("7");
       break;
      case 8:
        lcdsito.setCursor(0,0);
        lcdsito.print("8");
       break;
      case 9:
       lcdsito.setCursor(0,0);
       lcdsito.print("9");
       break;
       case 10:
         lcdsito.setCursor(0,0);
         lcdsito.print("10");
       break;
       case 11:
         lcdsito.setCursor(0,0);
         lcdsito.print("11");
       break;
       case 12:
         lcdsito.setCursor(0,0);
         lcdsito.print("12");
       break;
       case 13:
         lcdsito.setCursor(0,0);
         lcdsito.print("13");
       break;
       case 14:
         lcdsito.setCursor(0,0);
         lcdsito.print("14");
       break;
       case 15:
         lcdsito.setCursor(0,0);
         lcdsito.print("15");
       break;
       case 16:
         lcdsito.setCursor(0,0);
         lcdsito.print("16");
       break;
     }
    }
    if(contar>=16){
      tone(buzzersito,100);
      delay(250+50);
      lcdsito.clear();
      lcdsito.setCursor(0,0);
      lcdsito.write(1);
      delay(1000);
      lcdsito.setCursor(0,0);
      lcdsito.write(2);
      delay(1000);
    }
}

int dis(){
   long sensor, distancia; 
    delay(500);
    digitalWrite(trigger, HIGH);
    delayMicroseconds(2);
    digitalWrite (trigger, LOW);
    delayMicroseconds(5);
    sensor = pulseIn(echo, HIGH);
    distancia = sensor/59;
    return distancia;
}
