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

 enum colores
{
   rojo, 
   azul
 };

#include <Adafruit_NeoPixel.h>
#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>                
#include <DallasTemperature.h>

#define ledsito1 2
#define ledsito2 4
#define ledsito3 5 
#define cantidad_ledsitos 7
#define Neopix  11
#define Serv 9
#define boton1 6
#define boton2 8
#define boton3 10
#define buzzersito 3
#define rele 13
#define rele2 A1
#define radarsito 12
#define Cantidad_Leds 7
#define pin_Led 11
int estado = 0;
int estado2 = 0;
int estado3 = 0;
int valorsito = 0;
int valorsito2 = 0;
int valorsito3 = 0;
int valorsito4 = 0;
int valorsito_antiguo;
int valorsito_antiguo2;
int valorsito_antiguo3;



//Constructores
Adafruit_NeoPixel ruedita(cantidad_ledsitos,Neopix, NEO_GRB + NEO_KHZ800);
OneWire ourWire(7);                
DallasTemperature sensorsito(&ourWire); 
LiquidCrystal_I2C lcdsito(0x27,16,2);
Servo Servito;

byte fueguito[8] = {
  B00011,
  B00110,
  B01100,
  B01110,
  B10001,
  B10001,
  B10001,
  B01110
};
byte fueguito2[8] = {
  B11000,
  B01100,
  B00110,
  B01110,
  B11011,
  B10001,
  B11011,
  B01110
};

byte termometromedio[8] = {
  B01110,
  B01010,
  B01010,
  B01110,
  B10101,
  B10101,
  B10101,
  B01110
};

byte nevando[8] = {
  B10101,
  B01010,
  B10101,
  B01010,
  B10101,
  B01010,
  B00000,
  B11111
};

byte cerrado[8] = {
  B00000,
  B00100,
  B01110,
  B11111,
  B10101,
  B11111,
  B11111,
  B11111
};

byte abierto[8] = {
  B00000,
  B00100,
  B01110,
  B11111,
  B10101,
  B11111,
  B11011,
  B11011
};


byte apagado[8] = {
  B01110,
  B10001,
  B10001,
  B10001,
  B10001,
  B01110,
  B01110,
  B00100
};


byte encendidoo[8] = {
  B00000,
  B01110,
  B11111,
  B11111,
  B11111,
  B01110,
  B01110,
  B00100
};

void colorsitos(int color);

void setup() {
lcdsito.init();
lcdsito.backlight();   //Inicio la comunicacion serial
sensorsito.begin();   //Se inicia el sensor}
ruedita.begin();
pinMode(ledsito1,OUTPUT);
pinMode(ledsito2,OUTPUT);
pinMode(ledsito3,OUTPUT);
Servito.attach(Serv);
pinMode(boton1,INPUT_PULLUP);
pinMode(boton2,INPUT_PULLUP);
pinMode(boton3,INPUT_PULLUP);
pinMode(rele,OUTPUT);
pinMode(rele2,OUTPUT);
pinMode(buzzersito, OUTPUT);
lcdsito.createChar(0,fueguito);
lcdsito.createChar(1,fueguito2);
lcdsito.createChar(2,termometromedio);
lcdsito.createChar(3,nevando);
lcdsito.createChar(4,cerrado);
lcdsito.createChar(5,abierto);
lcdsito.createChar(6,encendidoo);
lcdsito.createChar(7,apagado);
lcdsito.setCursor(0,0);
lcdsito.print("tem");
lcdsito.setCursor(7,0);
lcdsito.print("rad");
lcdsito.setCursor(0,1);
lcdsito.print("puerta");
lcdsito.setCursor(8,1);
lcdsito.print("luz");
}
 
void loop() {
sensorsito.requestTemperatures();   //Se envía el comando para leer la temperatura
float temperaturita= sensorsito.getTempCByIndex(0); //Se obtiene la temperatura en ºC
  if(temperaturita >=15 && temperaturita <=21){
      lcdsito.setCursor(3,0);
      lcdsito.write(3);
      delay(1000);
      lcdsito.setCursor(3,0);
      lcdsito.print(" ");
      delay(1000);
      lcdsito.setCursor(3,0);
      lcdsito.write(3);
      delay(100);
      digitalWrite(ledsito1,HIGH);
      digitalWrite(ledsito2,LOW);
      digitalWrite(ledsito3,HIGH);
  }
    if(temperaturita >21 && temperaturita <25){
      lcdsito.setCursor(3,0);
      lcdsito.write(2);
      delay(1000);
      lcdsito.setCursor(3,0);
      lcdsito.print(" ");
      delay(1000);
      lcdsito.setCursor(3,0);
      lcdsito.write(2);
      delay(100);
      digitalWrite(ledsito1,LOW);
      digitalWrite(ledsito2,HIGH);
      digitalWrite(ledsito3,LOW);
    }
      if(temperaturita >25 && temperaturita <45){
      lcdsito.setCursor(3,0);
      lcdsito.write(0);
      delay(1000);
      lcdsito.setCursor(3,0);
      lcdsito.write(1);
      delay(1000);
      digitalWrite(ledsito1,HIGH);
      digitalWrite(ledsito2,LOW);
      digitalWrite(ledsito3,LOW);
      }
radaractivo();

ciervo();

foco1();

foco2();

}

void colorsitos(int color)
{
  switch(color)
  {
   case(rojo):
   {
    for(int i =0; i<8; i++)
    {
     ruedita.setPixelColor(i,ruedita.Color(255,0,0));
     ruedita.show();
     }
  }
  case(azul):
  {
    for(int i=0; i<8; i++)
    {
     ruedita.setPixelColor(i,ruedita.Color(0,0,255));
     ruedita.show(); 
    }
  }
}
}


      


void ciervo(){
 valorsito2 = digitalRead(boton1);
  if((valorsito2==1) && (valorsito_antiguo==0))
{
  estado=!estado;
  delay(100);
}
valorsito_antiguo=valorsito2;
if(estado==1){
  lcdsito.setCursor(6,1);
  lcdsito.write(5);
  delay(1000);
  lcdsito.setCursor(6,1);
  lcdsito.print(" ");
  delay(1000);
  lcdsito.setCursor(6,1);
  lcdsito.write(5);
  delay(100);
  Servito.write(90);
}
else{
  lcdsito.setCursor(6,1);
  lcdsito.write(4);
  delay(1000);
  lcdsito.setCursor(6,1);
  lcdsito.print(" ");
  delay(1000);
  lcdsito.setCursor(6,1);
  lcdsito.write(4);
  delay(100);
  Servito.write(0);
}
}

void foco1(){
  valorsito3=digitalRead(boton2);
  if((valorsito3==1) && (valorsito_antiguo2==0))
{
  estado2=!estado2;
  delay(100);
}
valorsito_antiguo2=valorsito3;
if(estado2==1){
  lcdsito.setCursor(11,1);
  lcdsito.write(6);
  delay(1000);
  lcdsito.setCursor(11,1);
  lcdsito.print(" ");
  delay(1000);
  lcdsito.write(6);
  delay(1000);
  digitalWrite(rele, HIGH);
}
else{
  lcdsito.setCursor(11,1);
  lcdsito.write(7);
  delay(1000);
  lcdsito.setCursor(11,1);
  lcdsito.print(" ");
  delay(1000);
  lcdsito.setCursor(11,1);
  lcdsito.write(7);
  delay(1000);
  digitalWrite(rele, LOW);
}
}

void foco2(){
  valorsito4=digitalRead(boton3);
  if((valorsito4==1) && (valorsito_antiguo3==0))
{
  estado3=!estado3;
  delay(100);
}
valorsito_antiguo3=valorsito4;
if(estado3==1){
  lcdsito.setCursor(12,1);
  lcdsito.write(6);
  delay(1000);
  lcdsito.setCursor(12,1);
  lcdsito.print(" ");
  delay(1000);
  lcdsito.setCursor(12,1);
  lcdsito.write(6);
  delay(100);
  digitalWrite(rele2,LOW);
}
else{
  lcdsito.setCursor(12,1);
  lcdsito.write(7);
  delay(1000);
  lcdsito.setCursor(12,1);
  lcdsito.print(" ");
  delay(1000);
  lcdsito.setCursor(12,1);
  lcdsito.write(7);
  delay(1000);
  digitalWrite(rele2, HIGH);
}
}

void radaractivo(){
  valorsito = digitalRead(radarsito);
  if(valorsito==1)
{ 
  lcdsito.setCursor(10,0);
  lcdsito.print("((!))");
  delay(1000);
  lcdsito.setCursor(10,0);
  lcdsito.print("     ");
  delay(1000);
  lcdsito.setCursor(10,0);
  lcdsito.print("((!))");
  delay(100);
  tone(buzzersito, 100);
  delay(100);
}
else
{
  lcdsito.setCursor(10,0);
  lcdsito.print("     ");
  lcdsito.setCursor(10,0);
  lcdsito.print("?");
  delay(1000);
  lcdsito.setCursor(10,0);
  lcdsito.print(" ");
  delay(1000);
  lcdsito.setCursor(10,0);
  lcdsito.print("?");
  delay(100);
  colorsitos(rojo);
  delay(10);
  colorsitos(azul);
  delay(100);
  noTone(buzzersito);
  delay(100);
}
}
