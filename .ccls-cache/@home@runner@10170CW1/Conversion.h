#include <cmath>

int ConvertSensor1(float currentValue) 
{
  return (2/3)*sqrt(currentValue);
}

int ConvertSensor2(float currentValue, float oldValue) 
{
 return currentValue - oldValue;
}
