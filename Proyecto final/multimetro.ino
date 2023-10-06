/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Esteban Andres Rivas Arreaga
 * Carnet: 2020198
 * Proyecto: final
*/
#include <SoftwareSerial.h>
SoftwareSerial bluetoosito(10,11);
const int sensorsito_voltaje = A0;
const int sensorsito_corriente = A1;
const int resistencia = A2;
float voltajesito_ref = 5.0;
float R1 = 10000;
int selector_medicionsita = 0;

void setup() {
  Serial.begin(9600);
  bluetoosito.begin(9600);
}

void loop() {
  if (bluetoosito.available()) {
    char caractersito = bluetoosito.read();
    
    switch (caractersito) {
      case '1':
        selector_medicionsita = 1;
        break;
      case '2': 
        selector_medicionsita = 2;
        break;
      case '3': 
        selector_medicionsita = 3;
        break;
      default:
        selector_medicionsita = 0;
        break;
    }
  }

  float valorsito_med = 0.0;
  switch (selector_medicionsita) {
    case 1: 
      valorsito_med = voltajesito_lectura();
      break;
    case 2: 
      valorsito_med = corrientita_lectura();
      break;
    case 3: 
      valorsito_med = resistensita_lectura();
      break;
    default:
      valorsito_med = 0.0;
      break;
  }

  bluetoosito.print(valorsito_med, 2);
  bluetoosito.print(';');
  delay(500);
}

float corrientita_lectura() {
  float sensibilidadsita = 185.0;
  float corrientesita = analogRead(sensorsito_corriente) * (5.0 / 1023.0); 
  float inteinsidadsita = (corrientesita - 2.5) / sensibilidadsita;
  return inteinsidadsita;
}

float voltajesito_lectura() {
  int sensorin_voltaje = analogRead(sensorsito_voltaje);
  float voltajito = map(sensorin_voltaje, 0, 1023, 0.0, 25.0);
  return voltajito;
}

float resistensita_lectura() {
   int valorsito = analogRead(resistencia);
  float voltajesito = (valorsito / 1023.0) * voltajesito_ref;
  float resistencita = (R1 * voltajesito) / (voltajesito_ref - voltajesito);
  return resistencita;
}
