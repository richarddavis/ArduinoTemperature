#include <TemperatureSensor.h>

#include <Wire.h>
#include <Adafruit_MPL3115A2.h>

TemperatureSensor temp;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
//  //temp.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Pressure is: ");
  Serial.println(temp.getPressure());
  Serial.print("Temperature is: ");
  Serial.println(temp.getTemperature());
  Serial.print("Altitude is: ");
  Serial.println(temp.getAltitude());
  delay(100);
}
