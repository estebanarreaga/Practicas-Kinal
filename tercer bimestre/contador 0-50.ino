/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Esteban Andres Rivas Arreaga
 * Carnet: 2020198
 * Proyecto:Contador de 0-50
*/


//Directivas de preprocesador
#define rise  2    
#define fall 3
#define a 4
#define b 5
#define c 6
#define d 7
#define e 8
#define f 9
#define g 10
#define A 11
#define B 12
#define C 13
#define D 14
#define E 15
#define F 16
#define G 17     

void ISR_falling(void);
void ISR_rising(void);

//Variables
volatile static bool contador=false; 
volatile static unsigned char i=0; 

void setup() {
  
  Serial.begin(19200); 
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(rise, INPUT);  
  pinMode(fall, INPUT_PULLUP); 
  attachInterrupt(digitalPinToInterrupt(rise),ISR_rising,RISING);  
  attachInterrupt(digitalPinToInterrupt(fall),ISR_falling,FALLING); 
}

void loop() {
  
if(contador)
{
  contador = false; 
  Serial.println(i); 
}
  displaysito();
  delay(500);
}
//Funciones de ISR
void ISR_rising(void)
{
  if (i < 50) {
    contador = true;
    i++;
  } 
}

void ISR_falling(void)
{
  if (i > 0) {
    contador = true;
    i--;
  }  
  }


void displaysito(){
  if(i==0){
     digitalWrite(a,HIGH);
     digitalWrite(b,HIGH);
     digitalWrite(c,HIGH);
     digitalWrite(d,HIGH);
     digitalWrite(e,HIGH);
     digitalWrite(f,HIGH);
     digitalWrite(g,LOW);
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW);
  }
  if(i==1){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW);
  }
  if(i==2){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW);
  }
  if(i==3){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW);
  }
  if(i==4){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW);
  }
  if(i==5){
     digitalWrite(a, HIGH);
     digitalWrite(b, LOW);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW);
  }
  if(i==6){
     digitalWrite(a, HIGH);
     digitalWrite(b, LOW);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW);
  }
 if(i==7){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW);
  }
 if(i==8){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW);
  }
 if(i==9){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW);
  }
 if(i==10){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     digitalWrite(A,HIGH);
     digitalWrite(B,HIGH);
     digitalWrite(C,HIGH);
     digitalWrite(D,HIGH);
     digitalWrite(E,HIGH);
     digitalWrite(F,HIGH);
     digitalWrite(G,LOW);
  }
 if(i==11){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     digitalWrite(A, LOW);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, LOW);
  }
 if(i==12){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, LOW);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, LOW);
     digitalWrite(G, HIGH);
  }
 if(i==13){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, HIGH);
  }
 if(i==14){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     digitalWrite(A, LOW);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }
 if(i==15){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     digitalWrite(A, HIGH);
     digitalWrite(B, LOW);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, LOW);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }     
 if(i==16){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     digitalWrite(A, HIGH);
     digitalWrite(B, LOW);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }     
 if(i==17){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, LOW);
  }     
 if(i==18){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }     
 if(i==19){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }     
 if(i==20){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A,HIGH);
     digitalWrite(B,HIGH);
     digitalWrite(C,HIGH);
     digitalWrite(D,HIGH);
     digitalWrite(E,HIGH);
     digitalWrite(F,HIGH);
     digitalWrite(G,LOW);
  }     
 if(i==21){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, LOW);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, LOW);
  }     
 if(i==22){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, LOW);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, LOW);
     digitalWrite(G, HIGH);
  }     
 if(i==23){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, HIGH);
  }     
 if(i==24){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, LOW);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }     
 if(i==25){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, LOW);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, LOW);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }     
 if(i==26){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, LOW);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }     
 if(i==27){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, LOW);
  }     
 if(i==28){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }     
 if(i==29){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }          
 if(i==30){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A,HIGH);
     digitalWrite(B,HIGH);
     digitalWrite(C,HIGH);
     digitalWrite(D,HIGH);
     digitalWrite(E,HIGH);
     digitalWrite(F,HIGH);
     digitalWrite(G,LOW);
  }          
 if(i==31){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, LOW);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, LOW);
  }          
 if(i==32){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, LOW);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, LOW);
     digitalWrite(G, HIGH);
  }          
 if(i==33){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, HIGH);
  }          
 if(i==34){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, LOW);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }          
 if(i==35){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, LOW);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, LOW);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }          
 if(i==36){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, LOW);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }          
 if(i==37){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, LOW);
  }          
 if(i==38){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }          
 if(i==39){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }          
 if(i==40){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A,HIGH);
     digitalWrite(B,HIGH);
     digitalWrite(C,HIGH);
     digitalWrite(D,HIGH);
     digitalWrite(E,HIGH);
     digitalWrite(F,HIGH);
     digitalWrite(G,LOW);
  }          
 if(i==41){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A, LOW);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, LOW);
  }    
 if(i==42){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, LOW);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, LOW);
     digitalWrite(G, HIGH);
  }           
 if(i==43){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, HIGH);
  }          
 if(i==44){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A, LOW);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }          
 if(i==45){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, LOW);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, LOW);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }          
 if(i==46){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, LOW);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }          
 if(i==47){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, LOW);
  }          
 if(i==48){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }          
 if(i==49){
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
  }          
 if(i==50){
     digitalWrite(a, HIGH);
     digitalWrite(b, LOW);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     digitalWrite(A,HIGH);
     digitalWrite(B,HIGH);
     digitalWrite(C,HIGH);
     digitalWrite(D,HIGH);
     digitalWrite(E,HIGH);
     digitalWrite(F,HIGH);
     digitalWrite(G,LOW);
  }
}
