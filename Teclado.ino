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

#include <Key.h>
#include <Keypad.h>

#define filotas 4   //cantidad de filas que posee el teclado matricial.
#define columnitas 4 //cantidad de columnas que posee el teclado matricial.
#define a 10 //define el led a del display en el pin 10
#define b 11//define el led a del display en el pin 11
#define c 12//define el led a del display en el pin 12
#define d 13//define el led a del display en el pin 13
#define e A1//define el led a del display en el pin A1
#define f A2//define el led a del display en el pin A2
#define g A3//define el led a del display en el pin A3

char keys[filotas][columnitas] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};//define las columnas y filas como variables

byte pines_filas[filotas] = {2, 3, 4, 5};//pines para las filas
byte pines_columnas[columnitas] = {6, 7, 8, 9};//pines para las columnas

//variables globales de tiempo de uso y tiempo max
unsigned long lastTimeSelected = 0;//Es para calcular el tiempo entre acciones
unsigned int timeoutSeconds = 5;//el maximo de tiempo

Keypad tecladin = Keypad( makeKeymap(keys), pines_filas, pines_columnas, filotas, columnitas);

void setup()
{
  Serial.begin(9600);    //Inicio la comunicacion serial.
  Serial.println("teclado matricial");
  Serial.println("hecho por Esteban");
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  char teclita = tecladin.getKey();

  if (millis() - lastTimeSelected == timeoutSeconds * 1000) { 
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
  }

  switch (teclita) {
    case '0':
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      lastTimeSelected = millis();
      break;
    case '1':
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      lastTimeSelected = millis(); 
      break;
    case '2':
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      lastTimeSelected = millis();
      break;
    case '3':
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      lastTimeSelected = millis();
      break;
    case '4':
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      lastTimeSelected = millis();
      break;
    case '5':
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      lastTimeSelected = millis();
      break;
    case '6':
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      lastTimeSelected = millis();
      break;
    case '7':
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      lastTimeSelected = millis();
      break;
    case '8':
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      lastTimeSelected = millis();
      break;
    case '9':
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      lastTimeSelected = millis();
      break;
    case 'A':
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      lastTimeSelected = millis();
      break;
    case 'B':
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      lastTimeSelected = millis();
      break;
    case 'C':
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      lastTimeSelected = millis();
      break;
    case 'D':
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      lastTimeSelected = millis();
      break;
    case '*':
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      lastTimeSelected = millis();
      break;
    case '#':
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      lastTimeSelected = millis();
      break;
  }
}
