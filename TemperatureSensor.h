/*
Temperature.h
*/

#ifndef TemperatureSensor_h
#define TemperatureSensor_h

#include "Arduino.h"
#include <Wire.h>
#include <Adafruit_MPL3115A2.h>

class TemperatureSensor
{
 public:

  TemperatureSensor();
  bool init();

  float getPressure();
  float getTemperature();
  float getAltitude();

 private:

  Adafruit_MPL3115A2 _baro;
};

#endif
