#include <iostream>
#include "SensorStream.h"
#include <fstream>
#include <cmath>

int ConvertSensor1(float currentValue) 
{
  return (2/3)*sqrt(currentValue);
}

int ConvertSensor2(float currentValue, float oldValue) 
{
 return currentValue - oldValue;
}

int main() {
  std::ifstream myFile("sensor_1.csv");

  SensorStream streamA(SensorID::SENSOR1);
  SensorStream streamB(SensorID::SENSOR2);
  SensorStream streamC(SensorID::SENSOR3);
  std::cout << streamA.GetNextInput();
  //std::cout << streamB.GetNextLine();
}