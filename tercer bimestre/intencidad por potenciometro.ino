/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Esteban Andres Rivas Arreaga
 * Carnet: 2020198
 * Proyecto: led por potenciometro
*/

#define ledsito 3
#define potenciometrito A0
int intencidadsita;

void setup() {
  pinMode(ledsito, OUTPUT);
}
 

void loop() {
 intencidadsita= analogRead(potenciometrito)/4;
 analogWrite(ledsito, intencidadsita);
}
