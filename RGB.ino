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

#define pulsador1 2//define pulsador 1 en pin 2
#define pulsador2 3//define pulsador 2 en pin 3
#define LEDrojo   4//define LED rojo en pin 4
#define LEDverde  5//define LED verde en pin 5
#define LEDazul   6//define LED azul en pin 6
void setup() {
  Serial.begin(9600);//inicio de la comunicacion serial
  pinMode(pulsador1,INPUT_PULLUP);//pone el pulsador1 como pullup
  pinMode(pulsador2,INPUT_PULLUP);//pone el pulsador2 como pullup
  pinMode(LEDrojo,OUTPUT);
  pinMode(LEDverde,OUTPUT);
  pinMode(LEDazul,OUTPUT);
  Serial.println("LED RGB");
  Serial.println("Hecho por Esteban");
  
}

void loop()
{
  bool boton1 = digitalRead(pulsador1);
  bool boton2 = digitalRead(pulsador2);

  if (boton1 == LOW && boton2 == HIGH) { // Se presiona el botón 1
    digitalWrite(LEDrojo, LOW); // Enciende el LED rojo
    digitalWrite(LEDverde, LOW); // Apaga el LED verde
    digitalWrite(LEDazul, HIGH); // Enciende el LED azul
  } else if (boton1 == HIGH && boton2 == LOW) { // Se presiona el botón 2
    digitalWrite(LEDrojo, HIGH); // Apaga el LED rojo
    digitalWrite(LEDverde, LOW); // Enciende el LED verde
    digitalWrite(LEDazul, LOW); // Enciende el LED azul
  } else if (boton1 == LOW && boton2 == LOW) { // Se presionan ambos botones
    digitalWrite(LEDrojo, LOW); // Enciende el LED rojo
    digitalWrite(LEDverde, HIGH); // Apaga el LED verde
    digitalWrite(LEDazul, LOW); // Apaga el LED azul
  } else { // No se presiona ningún botón
    digitalWrite(LEDrojo,LOW);
    delay(500);
    digitalWrite(LEDrojo,HIGH);
    digitalWrite(LEDverde,LOW);
    delay(500);
    digitalWrite(LEDverde,HIGH);
    digitalWrite(LEDazul,LOW);
    delay(500);
    digitalWrite(LEDazul,HIGH);
  
  }

}
