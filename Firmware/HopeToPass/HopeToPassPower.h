#ifndef HopeToPassPower_h
#define HopeToPassPower_h

#include <Arduino.h>

class HopeToPassPower
{
private:

public:

  HopeToPassPower();
  void begin();
  
  bool isCharging(); 
  uint16_t getBatteryVoltage();

  void enableGPS();
  void disableGPS();

  void enableMP3();
  void disableMP3();

  
};

#endif
