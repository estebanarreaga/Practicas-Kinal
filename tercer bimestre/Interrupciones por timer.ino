#include <OneWire.h>
#include <DallasTemperature.h>
#include <Ticker.h>
#define botonsito 3
int estado = 0;
int valorsito = 0;

void temp(void);
void botom(void);

volatile static bool estado_boton;
OneWire ourWire(2);                
DallasTemperature sensorsito(&ourWire); 
Ticker accion_temper(temp,3000);
Ticker accion_boton(botom,6000);

void setup() {
 Serial.begin(19200);
 pinMode(botonsito, INPUT_PULLUP);
 digitalWrite(botonsito, HIGH);
 sensorsito.begin();
 accion_temper.start();
 accion_boton.start();
}

void loop() {
  accion_temper.update();
  accion_boton.update();
}

void temp(void)
{
  sensorsito.requestTemperatures();
  float temperaturita= sensorsito.getTempCByIndex(0);
  Serial.println(temperaturita);
}

void botom(void){
 valorsito = digitalRead(botonsito);
 if(valorsito==0){
  Serial.println("boton activo");
 }
 else
{
  Serial.println("boton no presionado");
}
}
