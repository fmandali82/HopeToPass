#include "HopeToPassPower.h"

HopeToPassPower pwr;

void setup() 
{
  // put your setup code here, to run once:
  pwr.begin();
}

void loop()
{
  // put your main code here, to run repeatedly:
  pwr.isCharging();
  pwr.getBatteryVoltage(); 
}
