#include <SoftwareSerial.h>
#include <DallasTemperature.h>
#include <OneWire.h>
#define ledsito 3

SoftwareSerial bluet(10,11);
OneWire ourWire(2);                
DallasTemperature sensorsito(&ourWire);

void setup() {
Serial.begin(9600);
Serial.println("Encendido");
 
bluet.begin(9600);
pinMode(ledsito,OUTPUT);
}

char receptor;
void loop() {
  sensorsito.requestTemperatures();
  float temperaturita= sensorsito.getTempCByIndex(0);
if(bluet.available()){
  //Serial.write(bluet.read());
  receptor=bluet.read();
  Serial.println(receptor);

  if(receptor== '1'){
    Serial.println("On");
    digitalWrite(ledsito,HIGH);
  }

 if(receptor== '2'){
    Serial.println("Off");
    digitalWrite(ledsito,LOW);
  } 
}
if(Serial.available()){
  Serial.write(Serial.read());
}
bluet.print(temperaturita);
}
