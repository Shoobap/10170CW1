#include <iostream>
#include <fstream>
enum SensorID {SENSOR1, SENSOR2, SENSOR3};
class SensorStream 
{
  private:
    int line = 0;
    std::ifstream sensorData;
  public:
    SensorStream(SensorID sensorID);
    float GetNextInput();
};