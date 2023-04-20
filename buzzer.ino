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

int trigger = 2;
int echo = 3;
long sensor;
long distancia;
int buzzersito = 11; // definimos el pin al que conectaremos el zumbador.
int c=261; 
int d=294;
int e=329;
int f=349;
int g=391;
int gS=415;
int a=440;
int aS=455;
int b=466;
int cH=523;
int cSH=554;
int dH=587;
int dSH=622;
int eH=659;
int fH=698;
int fSH=740;
int gH=783;
int gSH=830;
int aH=880;

void setup()    
{    
 pinMode(trigger, OUTPUT);
 pinMode(echo, INPUT);
 
  pinMode(buzzersito, OUTPUT); // definimos la variable ZumbadorPin como una salida.
 
}    
     
void loop()   
{   
  digitalWrite(2, HIGH);
delayMicroseconds(10);
digitalWrite (2, LOW);
  sensor = pulseIn(3, HIGH);
 distancia = sensor/59;
 
if(distancia == 4){ 
tone(buzzersito, a, 500);
 delay(500+50);
}
if(distancia == 6){ 
tone(buzzersito, f, 350);
 delay(350+50);
}
if(distancia == 9){ 
tone(buzzersito, cH, 150);
 delay(150+50);
}
if(distancia == 12){ 
tone(buzzersito, eH, 500);
 delay(500+50);
}
if(distancia == 15){ 
tone(buzzersito,fH, 350 );
 delay(350+50);
}
if(distancia == 18){ 
tone(buzzersito,gS, 500 );
 delay(500+50);
}
if(distancia == 21){ 
tone(buzzersito,aH, 500);
 delay(500+50);
}
if(distancia == 24){ 
tone(buzzersito,gSH, 250 );
delay(250+50);
}
if(distancia == 27){ 
tone(buzzersito,gH, 250);
delay(250+50);
}
if(distancia == 30){ 
tone(buzzersito,fSH, 125 );
delay(125+50);
}
if(distancia == 33){ 
tone(buzzersito,aS, 250);
delay(250+50);
}
if(distancia == 36){ 
tone(buzzersito,dSH, 500);
delay(500+50);
}
if(distancia == 39){ 
tone(buzzersito,dH, 250);
delay(250+50);
}
if(distancia == 42){ 
tone(buzzersito,cSH, 250);
delay(250+50);
}
if(distancia == 45){ 
tone(buzzersito,b, 125);
delay(125+50);
}
if(distancia == 48){ 
tone(buzzersito,c, 125);
delay(125+50);
}
}
