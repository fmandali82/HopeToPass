const uint8_t chrgPin = 27;

HopeToPassPower::HopeToPassPower()
{
  
}
void HopeToPassPower::begin()
{
  pinMode(chrgPin, INPUT);
}

//Return whether or not the battery is charging
bool HopeToPassPower::isCharging()
{
 return !digitalRead(chrgPin); //return 0 if charging, 1 is not charging
}
uint16_t HopeToPassPower::getBatteryVoltage()
{
  
}

void HopeToPassPower::enableGPS()
{
  
}
void HopeToPassPower::disableGPD()
{
  
}

void HopeToPassPower::enableMP3()
{
  
}
voidHopeToPassPower:: disableMP3()
{
  
}
