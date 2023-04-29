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

#define led1 4
#define led2 5
#define led3 6
#define led4 7
#define led5 8
#define led6 9
#define led7 10
#define led8 12
#define led9 13
#define led10 A1
#define buzzersito 11
#define trigger 2   
#define echo    3

LiquidCrystal_I2C lcdsito(0x27,16,2);

void setup() {
  lcdsito.init();
  lcdsito.backlight();
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(led10,OUTPUT);
  pinMode(trigger, OUTPUT);
  pinMode(echo,INPUT);
  pinMode(buzzersito, OUTPUT); 
}
 
void loop() {
    int distancin=dis();
    if(distancin >=45){
      lcdsito.clear();
      lcdsito.setCursor(0,0);
      lcdsito.print("Fuera de alcance");
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
      digitalWrite(led9,LOW);
      digitalWrite(led10,LOW);       
    }
    else if(distancin >=30 && distancin <=40){
      lcdsito.clear();
      lcdsito.setCursor(0,0);
      lcdsito.print("Persona objeto");
      lcdsito.setCursor(0,1);
      lcdsito.print("Acercandose");
      lcdsito.setCursor(0,1);
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
      digitalWrite(led9,LOW);
      digitalWrite(led10,LOW);
      
    }
     else if(distancin >=15 && distancin <=25){
      lcdsito.clear();
      lcdsito.setCursor(0,0);
      lcdsito.print("Cuidado espacio");
      lcdsito.setCursor(0,1);
      lcdsito.print("Privado");
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH);
      digitalWrite(led5,HIGH);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
      digitalWrite(led9,LOW);
      digitalWrite(led10,LOW);
      tone(buzzersito, 100);
      delay(5000);
      noTone(buzzersito); 
    }
    else if(distancin >=5 && distancin <=10){
      lcdsito.clear();
      lcdsito.setCursor(0,0);
      lcdsito.print("Invadiendo");
      lcdsito.setCursor(0,1);
      lcdsito.print("Espacio Privado");
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH);
      digitalWrite(led5,HIGH);
      digitalWrite(led6,HIGH);
      digitalWrite(led7,HIGH);
      digitalWrite(led8,HIGH);
      digitalWrite(led9,HIGH);
      digitalWrite(led10,HIGH);
      tone(buzzersito, 500);
      delay(10000);
      noTone(buzzersito);  
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
