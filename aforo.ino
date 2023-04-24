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

#define trigger  2 //definimos el pin al que conectaremos el trigger 
#define echo  3 //definimos el pin al que conetaremos el echo 
//pines para el display
#define a  4
#define b  5
#define c  6
#define d  7
#define e  8
#define f  9
#define g  10
//pin del rele
#define rele  13

int contar = 0;

void setup() {
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);//definimos la variable trigger como una salida
  pinMode(echo,INPUT);//definimos la variable echo como una entrada
  pinMode(rele,OUTPUT);
  digitalWrite(rele, HIGH);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  cerito();
}
void loop() {
  long sensor, distancia; //variables para saber ditancia 
  delay(500);
  digitalWrite(2, HIGH);
  delayMicroseconds(2);
  digitalWrite (2, LOW);
  delayMicroseconds(5);
  sensor = pulseIn(3, HIGH);
  distancia = sensor/59;

 if(distancia >= 6 && distancia <= 10){
     contar++;
     switch(contar){
      case 1:
       unito();
       break;

      case 2:
       dosito();
       break;

      case 3:
       tresito();
       break;

      case 4:
       cuatrito();
       break;

      case 5:
       cinquito();
       break;

      case 6:
       seisito();
       break;

      case 7:
       sietesito();
       break;

      case 8:
       ochito();
       break;

      case 9:
       nuevesito();
       break;
    }
 }
 if(contar >= 10){
  digitalWrite(rele,LOW);
 }
}


   void cerito(){
     digitalWrite(a,HIGH);
     digitalWrite(b,HIGH);
     digitalWrite(c,HIGH);
     digitalWrite(d,HIGH);
     digitalWrite(e,HIGH);
     digitalWrite(f,HIGH);
     digitalWrite(g,LOW);
   }
   void unito(){
     digitalWrite(a, HIGH);
     digitalWrite(b, LOW);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
   }
   void dosito(){ 
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
   }
   void tresito(){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
   }
   void cuatrito(){
     digitalWrite(a, HIGH);
     digitalWrite(b, LOW);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
   }
   void cinquito(){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
   }
   void seisito(){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
   }
   void sietesito(){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
   }
   void ochito(){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
   }
   void nuevesito(){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
   }
