/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Esteban Andres Rivas Arreaga
 * Carnet: 2020198
 * Proyecto: control de rgb
*/

#define ledsitoR 5
#define ledsitoG 6
#define ledsitoB 9
#define potenciometrito A0
int loquetarde;

void setup() {
  pinMode(ledsitoR, OUTPUT);
  pinMode(ledsitoG, OUTPUT);
  pinMode(ledsitoB, OUTPUT);
}

void loop() {
  loquetarde = map(analogRead(potenciometrito),0,1023,100,1000);
  analogWrite(ledsitoR, 174);
  analogWrite(ledsitoG, 92);
  analogWrite(ledsitoB, 230);
  delay(loquetarde);
  analogWrite(ledsitoR, 255);
  analogWrite(ledsitoG, 255);
  analogWrite(ledsitoB, 255);
  delay(loquetarde);
  analogWrite(ledsitoR, 0);
  analogWrite(ledsitoG, 255);
  analogWrite(ledsitoB, 255);
  delay(loquetarde);
  analogWrite(ledsitoR, 189);
  analogWrite(ledsitoG, 174);
  analogWrite(ledsitoB, 20);
  delay(loquetarde);
  analogWrite(ledsitoR, 225);
  analogWrite(ledsitoG, 87);
  analogWrite(ledsitoB, 35);
  delay(loquetarde);
}
