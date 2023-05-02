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

#define trigger 2   
#define echo    3

byte cuadro_lleno[] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};

LiquidCrystal_I2C lcdsito(0x27,16,2);
void setup() {
  lcdsito.init();
  lcdsito.backlight();
  pinMode(trigger, OUTPUT);
  pinMode(echo,INPUT);
  lcdsito.createChar(1,cuadro_lleno);

}

void loop() {
  int distancin=dis();
    if(distancin >=50){
      lcdsito.clear();
      lcdsito.setCursor(7,0);
      lcdsito.print("50");  
      lcdsito.setCursor(6,0); 
      lcdsito.write(1);
      lcdsito.setCursor(5,0); 
      lcdsito.write(1);
      lcdsito.setCursor(4,0); 
      lcdsito.write(1);
      lcdsito.setCursor(9,0); 
      lcdsito.write(1);
      lcdsito.setCursor(10,0); 
      lcdsito.write(1);
      lcdsito.setCursor(11,0); 
      lcdsito.write(1);
      lcdsito.setCursor(6,1); 
      lcdsito.print("Libre");
    }
    if(distancin >=30 && distancin <=35){
      lcdsito.clear();
      lcdsito.setCursor(7,0);
      lcdsito.print("30");
      lcdsito.setCursor(6,0); 
      lcdsito.write(1);
      lcdsito.setCursor(5,0); 
      lcdsito.write(1);
      lcdsito.setCursor(4,0); 
      lcdsito.write(1);
      lcdsito.setCursor(3,0); 
      lcdsito.write(1);
      lcdsito.setCursor(2,0); 
      lcdsito.write(1);
      lcdsito.setCursor(9,0); 
      lcdsito.write(1);
      lcdsito.setCursor(10,0); 
      lcdsito.write(1);
      lcdsito.setCursor(11,0); 
      lcdsito.write(1);
      lcdsito.setCursor(12,0); 
      lcdsito.write(1);
      lcdsito.setCursor(13,0); 
      lcdsito.write(1);
      lcdsito.setCursor(5,1); 
      lcdsito.print("Cuidado");
    }
     if(distancin >=10 && distancin <=15){
      lcdsito.clear();
      lcdsito.setCursor(7,0);
      lcdsito.print("10");
      lcdsito.setCursor(6,0); 
      lcdsito.write(1);
      lcdsito.setCursor(5,0); 
      lcdsito.write(1);
      lcdsito.setCursor(4,0); 
      lcdsito.write(1);
      lcdsito.setCursor(3,0); 
      lcdsito.write(1);
      lcdsito.setCursor(2,0); 
      lcdsito.write(1);
      lcdsito.setCursor(1,0); 
      lcdsito.write(1);
      lcdsito.setCursor(0,0); 
      lcdsito.write(1);
      lcdsito.setCursor(9,0); 
      lcdsito.write(1);
      lcdsito.setCursor(10,0); 
      lcdsito.write(1);
      lcdsito.setCursor(11,0); 
      lcdsito.write(1);
      lcdsito.setCursor(12,0); 
      lcdsito.write(1);
      lcdsito.setCursor(13,0); 
      lcdsito.write(1);
      lcdsito.setCursor(14,0); 
      lcdsito.write(1);
      lcdsito.setCursor(15,0); 
      lcdsito.write(1);
      lcdsito.setCursor(16,0); 
      lcdsito.write(1);
      lcdsito.setCursor(6,1); 
      lcdsito.print("Alto");
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
