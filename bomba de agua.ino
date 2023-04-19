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

// Definición de constantes
#define sensor 2    // Pin analógico utilizado para el sensor
#define LedAzul 3   // Pin digital utilizado para el LED azul
#define LedRojo 4    // Pin digital utilizado para el LED rojo
#define rele 5      // Pin digital utilizado para el módulo de relés

// Función que lee el valor del sensor y retorna un valor entre 0 y 255
int readSensor() {
  int sensorValue = analogRead(sensor);
  }

void setup() {
  // Configuración de pines
  pinMode(LedAzul, OUTPUT);
  pinMode(LedRojo, OUTPUT);
  pinMode(rele, OUTPUT);
}

void loop() {
  // Lectura del valor del sensor
  int sensorValue = readSensor();
  
  // Encendido de la bomba si el recipiente está vacío
  if (sensorValue< 38) {
    digitalWrite(rele, HIGH);
    digitalWrite(LedAzul, HIGH);
    digitalWrite(LedRojo, LOW);
  }
  // Apagado de la bomba si el recipiente está lleno
  if (sensorValue >40) {
    digitalWrite(rele, LOW);
    digitalWrite(LedAzul, LOW);
    digitalWrite(LedRojo, HIGH);
  }
}
