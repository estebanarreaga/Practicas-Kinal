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

int ledsdisplay[] = {2,3,4,5,6,7,8,9,10,11};
int leds = 10;
int i=0;
//variables
void setup() {
  Serial.begin(9600);//inicio de la comunicacion serial
  pinMode(ledsdisplay[i], OUTPUT);//poner el display en salida
  Serial.println("Luces Autofantastico");
  Serial.println("Hecho por Esteban");
  
}

void loop()
{
 for (i = 0; i < leds; i++) {
    digitalWrite(ledsdisplay[i], HIGH);
    delay(500);
  }
  for (i = leds - 2; i >= 0; i--) {
    digitalWrite(ledsdisplay[i], LOW);
    delay(500);
  }
  for (i = leds - 1; i >= 0; i--) {
    digitalWrite(ledsdisplay[i], HIGH);
    delay(500);
  }
  for (i = 1; i < leds; i++) {
    digitalWrite(ledsdisplay[i], LOW);
    delay(500);
  }  

}
