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
int i=0;//define i como cero

struct producto
{
  char nombre_del_producto[11];
  float precio_unitario;
  unsigned int stock;
  float precio_por_lote;
  unsigned int reserva;
};//la estructura utilizada para el inventario
producto producto1 = {"Coca-Cola",6.10,2,12.20,20};
producto producto2 = {"Pepsi",5.00,5,25.00,20};
producto producto3 = {"Gatorade",6.50,4,26,20};
producto producto4 = {"te de limon",5.00,10,50.00,20};
producto aguas []  = {producto1,producto2,producto3,producto4};
//variables
void setup() {
  Serial.begin(9600);//inicio de la comunicacion serial
  pinMode(pulsador1,INPUT_PULLUP);//pone el pulsador1 como entrada
  pinMode(pulsador2,INPUT_PULLUP);//pone el pulsador2 como entrada
  Serial.println("Maquina expendedora");
  Serial.println("Hecho por Esteban");
  //definir los pulsadores
}

void loop()
{
  if(digitalRead(pulsador1)==LOW)
  {
    delay(100);
    i++;
     if(i>3) i=0;
 Serial.println(i + 0);
 Serial.println(aguas[i].nombre_del_producto);
 Serial.println("precio unitario:");
 Serial.println(aguas[i].precio_unitario);
 Serial.println("Stock:");
 Serial.println(aguas[i].stock);
 Serial.println("Reserva:");
 Serial.println(aguas[i].reserva);
 Serial.println("Precio por lote:");
 Serial.println(aguas[i].precio_por_lote);
  }//para que el pulsador avance
  if(digitalRead(pulsador2)==LOW)
  {
    delay(100);
    i--;
    if(i<0) i=3;
 Serial.println(i + 0);
 Serial.println(aguas[i].nombre_del_producto);
 Serial.println("precio unitario:");
 Serial.println(aguas[i].precio_unitario);
 Serial.println("Stock:");
 Serial.println(aguas[i].stock);
 Serial.println("Reserva:");
 Serial.println(aguas[i].reserva);
 Serial.println("Precio por lote:");
 Serial.println(aguas[i].precio_por_lote);
  }

 delay(100);

}//para que el pulsador retroseda
