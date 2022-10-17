#include "HopeToPassPower.h"

const uint8_t chrgPin = 27;
const uint8_t battPin = A4;
const uint8_t gpsPwrPin = 2;
const uint16_t VDD = 3300;
const uint16_t adcResolution = 1023;
/*
 * int - most Arduino boards define 2-bytes, but some actually do 4-bytes
 * float - give you decimals; float is less precise than double
 * double - give you decimals; more precise than float
 * 
 * uint8_t - unsigned 8 bit integer [0, 255]
 * uint16_t - unsigned 16 bit integer [0, 65355]
 * 
 * int8_t - unsigned 8 bit integer [-127, 127]
 * int16_t - unsigned 16 bit integer [-32768, 32768]
 * 
 */
HopeToPassPower::HopeToPassPower()
{
  
}
void HopeToPassPower::begin()
{
  pinMode(chrgPin, INPUT);
  pinMode(gpsPwrPin, OUTPUT);
}

//Return whether or not the battery is charging
bool HopeToPassPower::isCharging()
{
 return !digitalRead(chrgPin); //return 0 if charging, 1 is not charging
}
uint16_t HopeToPassPower::getBatteryVoltage()
{
  uint16_t val = analogRead(battPin); //10-bit ADC, will return a number between 0 (0V) and 1023 (3.3 V)
  uint16_t voltage = VDD*(val/(float)adcResolution);

  return 2*voltage;
 
}

void HopeToPassPower::enableGPS()
{
  digitalWrite(gpsPwrPin, HIGH); //enables regulator, turning on GPS
}
void HopeToPassPower::disableGPS()
{
  
  digitalWrite(gpsPwrPin, LOW); //enables regulator, turning off GPS
}

void HopeToPassPower::enableMP3()
{
  
}
void HopeToPassPower::disableMP3()
{
  
}
