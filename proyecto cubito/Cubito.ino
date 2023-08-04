/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Integrantes: Juan David Tejada Peñuela, Roberto Antonio Monterroso Aguilar, Lenin guiovanny TOC Muñoz, Esteban Andres Rivas Arreaga
 * Proyecto Final Tercer Bimetre Cubito con amor
*/
 
#include <Key.h>
#include <Keypad.h>
#include <Wire.h>    //Liberias para usar el protocolo i2c
#include <LiquidCrystal_I2C.h>  //Libreria que controla la LCD por medio de I2C

int Lpin = 8;
int CLpin = 12;
int Dpin = 11;
int P1 = 2;
int P2 = 3;
int P3 = 4;
int P4 = 5;
int P5 = 6;
int P6 = 7;
int P7 = 9;
int P8 = 10;
int tiempo = 120;
int tiempo2 = 1000;
int tiempo3 = 35;
int tiempo4 = 2000;
int tiempo5 = 20;
int tiempo6 = 100;
int tiempo7 = 40;
int tiempo0 =100;
int tiempo11 =200;
int tiempo22 =1500;
int tiempo33 =750;
int tiempo44 =50;
int tiempo55 =150;
int tiempo66 =101;
int tiempo77 =1000;
void animacion1 ();
void animacion2 ();
void animacion3 ();
void animacion4 ();
void animacion5 ();
void animacion6 ();
void animacion7 ();
#define filotas 4   //cantidad de filas que posee el teclado matricial.
#define columnitas 4 //cantidad de columnas que posee el teclado matricial.
char keys[filotas][columnitas] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};//define las columnas y filas como variables

byte pines_filas[filotas] = {2, 3, 4, 5};//pines para las filas
byte pines_columnas[columnitas] = {6, 7, 9, 10};//pines para las columnas


LiquidCrystal_I2C lcdsito(0x27,16,2);
Keypad tecladin = Keypad( makeKeymap(keys), pines_filas, pines_columnas, filotas, columnitas);

void setup() {
pinMode (Lpin, OUTPUT);
pinMode (CLpin, OUTPUT);
pinMode (Dpin, OUTPUT);
lcdsito.init(); //inicio la comunicacion serial con el modulo i2c
lcdsito.backlight(); //Enciendo la luz de fondo para poder ver el texto

}

void loop() {
  char teclita = tecladin.getKey();
if (teclita != NO_KEY) {
  switch (teclita) {
    case '1':
lcdsito.clear();
lcdsito.setCursor(3,0);
lcdsito.print("Parpadeo");
delay(100);
for (int i = 0; i <= 60; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 255);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 255);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 255);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 255); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   digitalWrite(P1,1);
   digitalWrite(P2,1);
   digitalWrite(P3,1);
   digitalWrite(P4,1);
   digitalWrite(P5,1);
   digitalWrite(P6,1);
   digitalWrite(P7,1);
   digitalWrite(P8,1);
   delay(tiempo66);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 255);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 255);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 255);
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 255); 
   digitalWrite(Lpin, 1);
   delay(tiempo66); 
   }
      
   for (int i = 0; i <= 5; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 24);  
   shiftOut(Dpin, CLpin, MSBFIRST, 24);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   digitalWrite(Lpin, 1);
   digitalWrite(P4,1);
   digitalWrite(P5,1);
   delay(tiempo55);

   digitalWrite(P4,0);
   digitalWrite(P5,0);
   delay(tiempo55);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 6);  
   shiftOut(Dpin, CLpin, MSBFIRST, 6);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   digitalWrite(Lpin, 1);
   digitalWrite(P7,1);
   digitalWrite(P6,1);
   delay(tiempo55);

   digitalWrite(P7,0);
   digitalWrite(P6,0);
   delay(tiempo55);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 24);  
   shiftOut(Dpin, CLpin, MSBFIRST, 24); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   digitalWrite(Lpin, 1);
   digitalWrite(P8,1);
   digitalWrite(P7,1);
   delay(tiempo55);

   digitalWrite(P8,0);
   digitalWrite(P7,0);
   delay(tiempo55);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 192);  
   shiftOut(Dpin, CLpin, MSBFIRST, 192);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   digitalWrite(P6,1);
   digitalWrite(P5,1);
   delay(tiempo55);

   digitalWrite(P6,0);
   digitalWrite(P5,0);
   delay(tiempo55);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 6);  
   shiftOut(Dpin, CLpin, MSBFIRST, 6); 
   digitalWrite(Lpin, 1);
   digitalWrite(P3,1);
   digitalWrite(P2,1);
   delay(tiempo55);

   digitalWrite(P3,0);
   digitalWrite(P2,0);
   delay(tiempo55);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);   
   shiftOut(Dpin, CLpin, MSBFIRST, 0);    
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 192);   
   shiftOut(Dpin, CLpin, MSBFIRST, 192);   
   digitalWrite(Lpin, 1);
   digitalWrite(P2,1);
   digitalWrite(P1,1);
   delay(tiempo55);

   digitalWrite(P2,0);
   digitalWrite(P1,0);
   delay(tiempo55);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 3);  
   shiftOut(Dpin, CLpin, MSBFIRST, 3);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   digitalWrite(Lpin, 1);
   digitalWrite(P3,1);
   digitalWrite(P2,1);
   delay(tiempo55);

   digitalWrite(P3,0);
   digitalWrite(P2,0);
   delay(tiempo55);  
}
break;
    case '2':
lcdsito.clear();
lcdsito.setCursor(5,0);
lcdsito.print("Vortex");
for (int i = 0; i <= 60; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 129);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 129); 
   digitalWrite(Lpin, 1);
   digitalWrite(P1,1);
   digitalWrite(P8,1);
   delay(tiempo44);

   digitalWrite(P1,0);
   digitalWrite(P8,0);
   
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 66);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 66); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   digitalWrite(P2,1);
   digitalWrite(P7,1);
   delay(tiempo44);

   digitalWrite(P2,0);
   digitalWrite(P7,0);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 36);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 36);
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   digitalWrite(P3,1);
   digitalWrite(P6,1);
   delay(tiempo44);

   digitalWrite(P3,0);
   digitalWrite(P6,0);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);  
   shiftOut(Dpin, CLpin, MSBFIRST, 24);  
   shiftOut(Dpin, CLpin, MSBFIRST, 24);
   shiftOut(Dpin, CLpin, MSBFIRST, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   digitalWrite(P4,1);
   digitalWrite(P5,1);
   delay(tiempo44);
   digitalWrite(P4,0);
   digitalWrite(P5,0);
}
break;
    case '3':
lcdsito.clear();
lcdsito.setCursor(1,0);
lcdsito.print("Mega Construct");
for (int i = 0; i <= 2; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 128);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 1); 
   digitalWrite(Lpin, 1);
   digitalWrite(P1,1);
   digitalWrite(P2,1);
   digitalWrite(P3,1); 
   digitalWrite(P4,1);
   digitalWrite(P5,1);
   digitalWrite(P6,1);
   digitalWrite(P7,1); 
   digitalWrite(P8,1);
   delay(tiempo11);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 128);  
   shiftOut(Dpin, CLpin, LSBFIRST, 128);
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 1); 
   digitalWrite(Lpin, 1);
   delay(tiempo11);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 128);  
   shiftOut(Dpin, CLpin, LSBFIRST, 128);
   shiftOut(Dpin, CLpin, LSBFIRST, 128);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 1);
   shiftOut(Dpin, CLpin, LSBFIRST, 1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 1); 
   digitalWrite(Lpin, 1);
   delay(tiempo11);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 128);  
   shiftOut(Dpin, CLpin, LSBFIRST, 128);
   shiftOut(Dpin, CLpin, LSBFIRST, 128);  
   shiftOut(Dpin, CLpin, LSBFIRST, 128);  
   shiftOut(Dpin, CLpin, LSBFIRST, 1);
   shiftOut(Dpin, CLpin, LSBFIRST, 1);
   shiftOut(Dpin, CLpin, LSBFIRST, 1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 1); 
   digitalWrite(Lpin, 1);
   delay(tiempo11);  
 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 128);  
   shiftOut(Dpin, CLpin, LSBFIRST, 128);
   shiftOut(Dpin, CLpin, LSBFIRST, 128);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 1);
   shiftOut(Dpin, CLpin, LSBFIRST, 1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 1); 
   digitalWrite(Lpin, 1);
   delay(tiempo11);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 128);  
   shiftOut(Dpin, CLpin, LSBFIRST, 128);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 1); 
   digitalWrite(Lpin, 1);
   delay(tiempo11);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 128);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129); 
   shiftOut(Dpin, CLpin, LSBFIRST, 1); 
   digitalWrite(Lpin, 1);
   delay(tiempo11);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129); 
   shiftOut(Dpin, CLpin, LSBFIRST, 129); 
   digitalWrite(Lpin, 1);
   delay(tiempo11);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 131);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129); 
   shiftOut(Dpin, CLpin, LSBFIRST, 193); 
   digitalWrite(Lpin, 1);
   delay(tiempo11);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 135);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129); 
   shiftOut(Dpin, CLpin, LSBFIRST, 225); 
   digitalWrite(Lpin, 1);
   delay(tiempo11);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 143);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129); 
   shiftOut(Dpin, CLpin, LSBFIRST, 241); 
   digitalWrite(Lpin, 1);
   delay(tiempo11);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, LSBFIRST, 159);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129); 
   shiftOut(Dpin, CLpin, LSBFIRST, 249); 
   digitalWrite(Lpin, 1);
   delay(tiempo11);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 253);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 253);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129); 
   shiftOut(Dpin, CLpin, LSBFIRST, 253); 
   digitalWrite(Lpin, 1);
   delay(tiempo11);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 255);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);  
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129);
   shiftOut(Dpin, CLpin, LSBFIRST, 129); 
   shiftOut(Dpin, CLpin, LSBFIRST, 255); 
   digitalWrite(Lpin, 1);
   delay(tiempo22);
   }
break;
    case '4':
lcdsito.clear();
lcdsito.setCursor(4,0);
lcdsito.print("Levels");
for (int i = 0; i <= 10; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x1);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);
}
   for (int i = 0; i <= 10; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x2);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);
}
   for (int i = 0; i <= 10; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x4);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);
}

   for (int i = 0; i <= 10; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x8);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);
}

   for (int i = 0; i <= 10; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x10);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);
}

   for (int i = 0; i <= 10; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x20);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);
}

   for (int i = 0; i <= 10; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x40);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);
}

   for (int i = 0; i <= 10; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x80);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   shiftOut(Dpin, CLpin, MSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo5);
}
break;
    case '5':
lcdsito.clear();
lcdsito.setCursor(2,0);
lcdsito.print("Serpientita");
for (int i = 0; i <= 5; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x80);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x81); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x81); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x81); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x81);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x81); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x81); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0xFF);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo);
     
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x1);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x81); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x81); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x81); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x81);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x81); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x81); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo);
     
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0xFF);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo);   
}
 
 for (int i = 0; i <= 0; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x1);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x1);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x1);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x1);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);
}

 for (int i = 0; i <= 0; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x2);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x2);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x2);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x2);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);
}

 for (int i = 0; i <= 0; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x4);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x4);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x4);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x4);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);
}

 for (int i = 0; i <= 0; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x8);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x8);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x8);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x8);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);
}

 for (int i = 0; i <= 0; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x10);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x10);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x10);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x10);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);
}

 for (int i = 0; i <= 0; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x20);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x20);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x20);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x20);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);
}

 for (int i = 0; i <= 0; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x40);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x40);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x40);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x40);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);
}

 for (int i = 0; i <= 0; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x80);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x80);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x80); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x80);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x80);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);
}
break;
    case '6':
lcdsito.clear();
lcdsito.setCursor(5,0);
lcdsito.print("Fuegos");
lcdsito.setCursor(2,1);
lcdsito.print("Artificiales");
for (int i = 0; i <= 5; i++)
   { 
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x1);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x20); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x2);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x20); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x4);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x20); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x8);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x20); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x10);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x20); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x10);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x90); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x20); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xA8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x94);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x50); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x8);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x90); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x20); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xA8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x94);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x50); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x4);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x90); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x20); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xA8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x94);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x50); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x2);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x90); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x20); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xA8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x94);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x50); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x1);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x90); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x20); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xA8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x94);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x50); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);
//////////////
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x1);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x2);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x4);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x8);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x10);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x20);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2B); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x11); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x10);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2B); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x11); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x8);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x90); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x20); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2B); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x11); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x4);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x90); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x20); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2B); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x11); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x2);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x90); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x20); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2B); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x11);  
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x1);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x90); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x20); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2B); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x2); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x11); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);
///////

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x1);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x2);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x4);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x8);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x10);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x20);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x40);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x80);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x80);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xC8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x50); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1A);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xB); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x12); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x40);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xC8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x50); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1A);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xB); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x12); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x20);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xC8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x50); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1A);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xB); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x12); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x10);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xC8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x50); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1A);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xB); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x12); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x8);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xC8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x50); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1A);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xB); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x12); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x4);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xC8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x50); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1A);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xB); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x12); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x2);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xC8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x50); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1A);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xB); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x12); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x1);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0x40); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xC8); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x50); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1A);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x1); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0xB); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x12); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);
////////////
   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x1);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x2);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x4);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x8);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x10);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x20);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x40);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x80);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo7);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x80);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x54); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x28);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x44); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x40);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x54); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x28);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x44); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x20);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x54); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x28);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x44); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x10);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x54); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x28);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x44); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x8);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x54); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x28);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x44); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x4);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0xFF); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x54); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x28);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x44); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x2);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x54); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x28);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x44); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);

   digitalWrite(Lpin, 0);
   shiftOut(Dpin, CLpin, MSBFIRST, 0x1);     //uln2803
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x54); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x10); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0x28);  
   shiftOut(Dpin, CLpin, LSBFIRST, 0x44); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   shiftOut(Dpin, CLpin, LSBFIRST, 0); 
   digitalWrite(Lpin, 1);
   delay(tiempo6);
   }
break;
}
}
else{
lcdsito.clear();
lcdsito.setCursor(3,0);
lcdsito.print("LOGO KINAL");
for(int i = 0; i<5; i++){
digitalWrite(Lpin, 0);
shiftOut(Dpin, CLpin, MSBFIRST,0x80); // control de capa 1
//control de cara
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0x7E);
shiftOut(Dpin, CLpin, MSBFIRST,0x7E);
shiftOut(Dpin, CLpin, MSBFIRST,0x7E);
shiftOut(Dpin, CLpin, MSBFIRST,0x7E);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
digitalWrite(Lpin, 1);

digitalWrite(Lpin, 0);
shiftOut(Dpin, CLpin, MSBFIRST,0x40); // control de capa 2
//control de cara
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0x81);
shiftOut(Dpin, CLpin, MSBFIRST,0x81);
shiftOut(Dpin, CLpin, MSBFIRST,0x81);
shiftOut(Dpin, CLpin, MSBFIRST,0x81);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
digitalWrite(Lpin, 1);

digitalWrite(Lpin, 0);
shiftOut(Dpin, CLpin, MSBFIRST,0x20); // control de capa 3
//control de cara
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0x89);
shiftOut(Dpin, CLpin, MSBFIRST,0x89);
shiftOut(Dpin, CLpin, MSBFIRST,0x89);
shiftOut(Dpin, CLpin, MSBFIRST,0x89);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
digitalWrite(Lpin, 1);


digitalWrite(Lpin, 0);
shiftOut(Dpin, CLpin, MSBFIRST,0x10); // control de capa 4
//control de cara
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0x89);
shiftOut(Dpin, CLpin, MSBFIRST,0x89);
shiftOut(Dpin, CLpin, MSBFIRST,0x89);
shiftOut(Dpin, CLpin, MSBFIRST,0x89);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
digitalWrite(Lpin, 1);

digitalWrite(Lpin, 0);
shiftOut(Dpin, CLpin, MSBFIRST,0x8); // control de capa 5
//control de cara
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0x9D);
shiftOut(Dpin, CLpin, MSBFIRST,0x9D);
shiftOut(Dpin, CLpin, MSBFIRST,0x9D);
shiftOut(Dpin, CLpin, MSBFIRST,0x9D);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
digitalWrite(Lpin, 1);


digitalWrite(Lpin, 0);
shiftOut(Dpin, CLpin, MSBFIRST,0x4); // control de capa 6
//control de cara
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0x7E);
shiftOut(Dpin, CLpin, MSBFIRST,0x7E);
shiftOut(Dpin, CLpin, MSBFIRST,0x7E);
shiftOut(Dpin, CLpin, MSBFIRST,0x7E);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
digitalWrite(Lpin, 1);


digitalWrite(Lpin, 0);
shiftOut(Dpin, CLpin, MSBFIRST,0x2); // control de capa 7
//control de cara
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0x3C);
shiftOut(Dpin, CLpin, MSBFIRST,0x3C);
shiftOut(Dpin, CLpin, MSBFIRST,0x3C);
shiftOut(Dpin, CLpin, MSBFIRST,0x3C);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
digitalWrite(Lpin, 1);


digitalWrite(Lpin, 0);
shiftOut(Dpin, CLpin, MSBFIRST,0x1); // control de capa 8
//control de cara
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0x18);
shiftOut(Dpin, CLpin, MSBFIRST,0x18);
shiftOut(Dpin, CLpin, MSBFIRST,0x18);
shiftOut(Dpin, CLpin, MSBFIRST,0x18);
shiftOut(Dpin, CLpin, MSBFIRST,0);
shiftOut(Dpin, CLpin, MSBFIRST,0);
digitalWrite(Lpin, 1);
}

}
}
