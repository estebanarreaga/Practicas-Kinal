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

#include <LedControl.h>   //libreria que me permite usar el controlador led max7219

//Directivas de preprocesador
#define entradita   12   //pin 12 conectado al pin de datos del max7219.
#define clocksito 11   //pin 11 conectado al pin de clock del max7219.
#define cs  10   //pin 10 conectado al pin de carga del max7219.
int adc, conver;

//Constructores
LedControl matricita = LedControl(entradita,clocksito,cs,1);


/*
 * Variable:
 * Estas variables especifican que leds deben de encenderse en la matriz
 * de manera similar a como creabamos caracteres especiales en una lcd.
*/
byte f[8]= {        // array que contiene todos los elementos de las
  B00000000,        // filas necesarias por mostrar el digito cero
  B00111100,
  B00100000,
  B00100000,
  B00111000,
  B00100000,
  B00100000,
  B00100000
};
byte u[8]= {       // array que contiene todos los elementos de las
  B00000000,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B00111100
};

byte e[8]= {       // array que contiene todos los elementos de las
  B00000000,
  B00111100,
  B00100000,
  B00100000,
  B00111000,
  B00100000,
  B00100000,
  B00111100
};

byte g[8]= {       // array que contiene todos los elementos de las
  B00000000,
  B00111100,
  B01000000,
  B01000000,
  B01001110,
  B01000010,
  B01000010,
  B00111100
};

byte o[8]= {     // array que contiene todos los elementos de las
  B00000000,
  B00111100,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B00111100
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



unsigned long update_delay = 850;   //espacio entre animaciones.

//Prototipos de funciones
int display_number(unsigned char number);

void setup()
{
  Serial.begin(9600); //Inicio la comunicacion serial a 9600 baudios.
  matricita.shutdown(0,false); //Activo el max7219 para poder mostrar los digitos.
  matricita.setIntensity(0,15);  //Brilo a la mitad 
  matricita.clearDisplay(0);    //limpio el display
}


void loop() 
{
  adc = analogRead(A0);
  conver = map (adc,0,1024,0,100);
  Serial.println(adc);
  Serial.println("porcentaje:");
  Serial.println(conver);
  delay(100);

 if(adc>35 && adc>=3){
  for(int i =0; i<7;i++)
  {
    display_number(i);
    delay(update_delay);
  }
 }
  else{
     matricita.clearDisplay(0);
  }
}

int display_number(unsigned char number)
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
