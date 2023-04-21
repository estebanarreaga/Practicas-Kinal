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

 int rele = 8; // Pin del módulo de relé
 int sensorsito = 2; // Pin del sensor de agua

void setup() {
  pinMode(rele, OUTPUT);
  pinMode(sensorsito, INPUT);
}

void loop() {
  // Verifica si hay agua en el sensor
  if (digitalRead(sensorsito)==LOW) {
    // Si hay agua, activa el relé
    digitalWrite(rele, HIGH);
  }
   //si no hay agua
if(digitalRead(sensorsito)==HIGH){
   digitalWrite(rele, LOW);
  }
}
