/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Esteban Andres Rivas Arreaga
 * Carnet: 2020198
 * Proyecto: Sistema embebido
*/

#include <Ticker.h>
#include <LedControl.h>   //libreria que me permite usar el controlador led max7219

//Directivas de preprocesador
#define entradita   12   //pin 12 conectado al pin de datos del max7219.
#define clocksito 11   //pin 11 conectado al pin de clock del max7219.
#define cs  10   //pin 10 conectado al pin de carga del max7219.
int adc, conver;

//Constructores
LedControl matricita = LedControl(entradita,clocksito,cs,1);

void medicion(void);
Ticker accion_med(medicion,2000);
/*
 * Variable:
 * Estas variables especifican que leds deben de encenderse en la matriz
 * de manera similar a como creabamos caracteres especiales en una lcd.
*/
byte f[8]= {        // array que contiene todos los elementos de las
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00111000,
  B01111100,
  B00111000
};
byte u[8]= {       // array que contiene todos los elementos de las
  B00000000,
  B00000000,
  B00001000,
  B00010000,
  B00111000,
  B01111100,
  B01111100,
  B00111000
};

byte e[8]= {       // array que contiene todos los elementos de las
  B00000000,
  B00001100,
  B00011000,
  B01111110,
  B11111111,
  B11100111,
  B01100110,
  B00111100
};

byte g[8]= {       // array que contiene todos los elementos de las
  B01000000,
  B01100000,
  B01111000,
  B01111110,
  B11111111,
  B11100111,
  B01100110,
  B00111100
};

byte o[8]= {     // array que contiene todos los elementos de las
  B01000000,
  B01100000,
  B01111000,
  B01111110,
  B11111111,
  B11100111,
  B01100110,
  B 00111100
};
byte fueguito[8]= {     // array que contiene todos los elementos de las
  B00001100,
  B00011000,
  B00100100,
  B01011010,
  B10111101,
  B10111101,
  B01011010,
  B00111100
};
byte hielito[8]= {     // array que contiene todos los elementos de las
  B10010010,
  B01010100,
  B00111000,
  B11111110,
  B00111000,
  B01010100,
  B10010010,
  B00000000
};


unsigned long delaycito = 850;   //espacio entre animaciones.

//Prototipos de funciones
int alerta(unsigned char number);

void setup()
{
  Serial.begin(9600); //Inicio la comunicacion serial a 9600 baudios.
  accion_med.start();
  matricita.shutdown(0,false); //Activo el max7219 para poder mostrar los digitos.
  matricita.setIntensity(0,15);  //Brilo a la mitad 
  matricita.clearDisplay(0);    //limpio el display
}


void loop() 
{

accion_med.update();  
}

int alerta(unsigned char number)
{
 switch (number)
  {
    case (0):
    {
      for(int i=0; i<8;i++)
      {
        matricita.setRow(0,i,f[i]);
      }
      break;
    }
    
    case (1):
    {
      for(int i=0; i<8;i++)
      {
        matricita.setRow(0,i,u[i]);
      }
      break;
    }

    
    case (2):
    {
      for(int i=0; i<8;i++)
      {
        matricita.setRow(0,i,e[i]);
      }
      break;
    }
    
    
    case (3):
    {
      for(int i=0; i<8;i++)
      {
        matricita.setRow(0,i,g[i]);
      }
      break;
    }
    
    case (4):
    {
      for(int i=0; i<8;i++)
      {
        matricita.setRow(0,i,o[i]);
      }
      break;
    }
    
    case (5):
    {
      for(int i=0; i<8;i++)
      {
        matricita.setRow(0,i,fueguito[i]);
      }
      break;
    }
    
  }
  
}



void medicion(void)
{
  adc = analogRead(A0);
  conver = map (adc,0,1024,0,100);
  Serial.println(adc);
  Serial.println("porcentaje:");
  Serial.println(conver);
  delay(100);
  
 if(adc>50){
  for(int i =0; i<7;i++)
  {
   alerta(i);
    delay(delaycito);
  }
 }
  else{
     for(int i=0; i<8;i++)
      {
        matricita.setRow(0,i,hielito[i]);
      }
      delay(delaycito);
      matricita.clearDisplay(0);
      delay(delaycito);
      for(int i=0; i<8;i++)
      {
        matricita.setRow(0,i,hielito[i]);
      }
  }
}
