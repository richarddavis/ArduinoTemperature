#include "Arduino.h"
#include "TemperatureSensor.h"

// Libraries for the Adafruit temperature sensor
#include <Wire.h>
#include <Adafruit_MPL3115A2.h>

TemperatureSensor::TemperatureSensor()
{
  _baro = Adafruit_MPL3115A2();
}

bool TemperatureSensor::init()
{
  /* Initialise the sensor */
  if(!_baro.begin())
  {
    /* There was a problem detecting the ADXL345 ... check your connections */
    return(false);
  } else {
    // Sensor initialized
    return(true);
  }
}

float TemperatureSensor::getPressure()
{
  _baro.getPressure();
}

float TemperatureSensor::getTemperature()
{
  _baro.getTemperature();
}

float TemperatureSensor::getAltitude()
{
  _baro.getAltitude();
}
